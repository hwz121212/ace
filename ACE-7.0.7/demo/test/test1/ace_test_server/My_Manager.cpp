#include "stdafx.h"
#include "My_Manager.h"



My_Manager_Handler::My_Manager_Handler():mutex_my(){}
int My_Manager_Handler::open(void*)
{
	ConnectCnt = 0;
	ACE_DEBUG((LM_DEBUG,"Acceptor: ThreadID:(%t) open\n"));
	int a = activate(THR_NEW_LWP,
		Thread_Cnt, //2 new threads
		0, //force active false, if already created don't try again.
		ACE_DEFAULT_THREAD_PRIORITY,//Use default thread priority
		-1,
		this,//Which ACE_Task object to create? In this case this one.
		0,// don't care about thread handles used
		0,// don't care about where stacks are created
		0,//don't care about stack sizes
		thread_names); // keep identifiers in thread_names
	ACE_OS::sleep(1);
	return 0;
}
int My_Manager_Handler::AddStream(ACE_SOCK_Stream & peer)
{
	ACE_Guard<ACE_Thread_Mutex> guard(mutex_my);//mutex_my.acquire();	
	Sock_Stream_list[ConnectCnt] = &peer;
	ConnectCnt++;
	//mutex_my.release();
	return 0;
}
bool My_Manager_Handler::delStream(ACE_SOCK_Stream & peer)
{
	ACE_Guard<ACE_Thread_Mutex> guard(mutex_my);//mutex_my.acquire();
	thread_names[0]=0;
	if(ConnectCnt == 0)
	{
		//mutex_my.release();
		return false;
	}
	for(int i = 0; i <ConnectCnt ; i++)
	{
		if(Sock_Stream_list[i] == &peer)
		{
			Sock_Stream_list[i] = Sock_Stream_list[ConnectCnt];
			ConnectCnt--;
		}
	}	
	//mutex_my.release();
	return true;
}
bool  My_Manager_Handler::work(ACE_SOCK_Stream &peer ,char *data_buf,int len)
{
	return true;
}
bool My_Manager_Handler::send_buf(int send_flag,char *data,int len)
{
	ACE_Guard<ACE_Thread_Mutex> guard(mutex_my);//mutex_my.acquire();

	if(ConnectCnt == 0)
	{
		//mutex_my.release();
		return false;
	}
	for(int i = 0 ; i <ConnectCnt; i ++)
		Sock_Stream_list[i]->send(data,len);
	//mutex_my.release();
	return true;
}

#include <memory>


int My_Manager_Handler::svc(void)
{
	//ACE_DEBUG ((LM_DEBUG, "(%t) Manager thread open!\n"));
	if(ACE_Thread::self() == thread_names[0])
	{
		while(1)
		{
			Reactor::instance()->handle_events();
		}
	}
	else
	{
		while(1)
		{
			auto_ptr<ACE_Method_Request>  mo(this->activation_queue_.dequeue ());
			ACE_DEBUG ((LM_DEBUG, "(%t) calling method object\n"));
			if (mo->call () == -1)
				break;
		}
	}
	return 0; 
}


