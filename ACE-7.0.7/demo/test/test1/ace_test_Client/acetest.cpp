// aceTest4.cpp : 定义控制台应用程序的入口点。
//

#include "acetest.h"

int My_Manager_Handler::open(void*)
{
	ConnectCnt = 0;
	//ACE_OS::memset(&mutex_ , 0 ,sizeof(mutex_));
	ACE_DEBUG((LM_DEBUG,"Acceptor: ThreadID:(%t) open\n"));
	//Create two new threads to create and send messages to the
	//remote machine.
	activate(THR_NEW_LWP,
		1, //2 new threads
		0, //force active false, if already created don't try again.
		ACE_DEFAULT_THREAD_PRIORITY,//Use default thread priority
		-1,
		this,//Which ACE_Task object to create? In this case this one.
		0,// don't care about thread handles used
		0,// don't care about where stacks are created
		0,//don't care about stack sizes
		&thread_names); // keep identifiers in thread_names
	//keep the service handler registered with the acceptor.
	return 0;
}

int My_Manager_Handler::setStream(ACE_SOCK_Stream & peer)
{
	//mutex_.acquire();
	peer_= &peer;
	//mutex_.release();
	return 0;
}
bool My_Manager_Handler::delStream(ACE_SOCK_Stream & peer)
{
	//mutex_.acquire();
	peer_->close();
	peer_ = NULL;
	//mutex_.release();
	return true;
}
bool  My_Manager_Handler::work(char *data_buf,int len)
{
	return true;
}
bool My_Manager_Handler::send_buf(int send_flag,char *data,int len)
{
	//mutex_.acquire();
	/*
	主动发送
	*/if(peer_ ==NULL)
	{
		//mutex_.release();
		return false;
	}
	peer_->send(data,len);
	//mutex_.release();
	return true;
}
//void My_Manager_Handler::send_message1(void)
//{
//	//Send message type 1
//	ACE_DEBUG((LM_DEBUG,"(%t)Sending message::>>"));
//	//Send the data to the remote peer
//	ACE_DEBUG((LM_DEBUG,"Sent message1"));
//	peer().send_n("Message1",8);
//} //end send_message1


int My_Manager_Handler::svc(void)
{

		ACE_DEBUG( (LM_DEBUG,"(%t) Svc thread \n"));
		ACE_INET_Addr addr(PORT_NO);
		My_Connect_Handler *eh=new My_Connect_Handler(addr,this);
		//ACE_DEBUG((LM_DEBUG,"(%t)start\n"));
		ACE_Reactor::instance()->register_handler(eh,ACE_Event_Handler::ACCEPT_MASK);
		while(1)
			ACE_Reactor::instance()->handle_events();	
	return 0; // keep the compiler happy.
}

My_Connect_Handler::My_Connect_Handler(ACE_Addr &addr,My_Manager_Handler *c_input)
{
	//ACE_OS::memset(&mutex_ , 0 ,sizeof(mutex_));
	c_input_ = c_input;
	while( peer_connector.connect(peer_,addr) == -1)
	{
		ACE_OS::sleep(10);
	}
	c_input_->setStream(peer_);
	ACE_Reactor::instance()->register_handler(this,ACE_Event_Handler::READ_MASK);
}

int My_Connect_Handler::handle_input(ACE_HANDLE)
{
	//mutex_.acquire();
	ACE_OS::memset(data,0,BUF_LEN);
	int n = peer_i().recv(data,BUF_LEN);
	if(n<=0)
	{
		ACE_DEBUG((LM_DEBUG,"(%t) 连接已经断开\n"));
		peer_.close();
		//mutex_.release();
		return -1;
	}
	//mutex_.release();
	ACE_DEBUG((LM_DEBUG,"(%t) %d收到信息：%s\n",peer_.get_handle(),data));
	
	//peer_i().send(data,n);

	// do something with the input received.
	// ...
	//keep yourself registered with the reactor

	return 0;
}
ACE_HANDLE My_Connect_Handler::get_handle()const
{
	return this->peer_.get_handle();
}
ACE_SOCK_Stream &My_Connect_Handler::peer_i()
{
	return this->peer_;
}
