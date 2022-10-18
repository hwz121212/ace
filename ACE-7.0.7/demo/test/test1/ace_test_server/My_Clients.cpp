#include "stdafx.h"
#include "My_Clients.h"


//typedef ACE_Acceptor<My_client,ACE_SOCK_ACCEPTOR> Acceptor;

int My_client::open(void*)
{
	ACE_DEBUG((LM_DEBUG,"(%t)�û�%d���ӳɹ�!\n",peer().get_handle()));
	////Create two new threads to create and send messages to the
	////////remote machine.
	//activate(THR_NEW_LWP,
	//	1, //2 new threads
	//	0,
	//	ACE_DEFAULT_THREAD_PRIORITY,
	//	-1,
	//	this,
	//	0,
	//	0,
	//	0,
	//	&thread_names); // identifiers in thread_handles
	mask_ = ACE_Event_Handler::READ_MASK;
	Reactor::instance()->register_handler(this,mask_); 
	TimerId = Reactor::instance()->schedule_timer (this,0,ACE_Time_Value (10));
	//	Reactor::instance()->reset_timer_interval(n[i],ACE_Time_Value(3));
	
	return 0;
}
int My_client::handle_timeout (const ACE_Time_Value &tv,const void *arg)
{
	ACE_DEBUG ((LM_DEBUG, "�ͻ�%d����10��û��Ϣ!\n", this->peer().get_handle()));
	//delete act;
	return -1;
}
bool My_client::recv_message(void)
{
	ACE_Message_Block *mb;
	ACE_ASSERT(this->getq(mb)!=-1);
	int length=mb->length();
	char *data =mb->rd_ptr();
	//Send the data to the remote peer
	//ACE_DEBUG((LM_DEBUG,"(%t)���յ� message::>>%s \n",data,length));
	mb->release();
	if(ACE_OS::strcmp(data,MESSAGE_COME) == 0)
	{
		char msg[50] = {0};
		//Check if peer aborted the connection
		int len = peer().recv(msg,50);
		if(len<=0)
		{
			printf("���ӶϿ�\n");
			construct_message(CLOSE_CLIENT,ACE_OS::strlen(CLOSE_CLIENT));
			my_manager_->delStream(peer());

			//peer().close();				
			return false; //de-register from the Reactor.
		}
		else
		{
			ACE_DEBUG((LM_DEBUG,"(%t)���յ�:%s \n",msg));
			/*  ��������  */
		}
	}
	else if(ACE_OS::strcmp(data,CLOSE_CLIENT) == 0)
	{	
		return false;
	}
	return true;
} 
int My_client::construct_message(char *data,int len)
{
	ACE_Message_Block *mb;
	ACE_NEW_RETURN (mb,ACE_Message_Block (len,//Message 16 bytes long
		ACE_Message_Block::MB_DATA,//Set header to data
		0,//No continuations.
		data//The data we want to send
		), 0);
	mb->wr_ptr(len); //Set the write pointer.
	ACE_ASSERT(this->putq(mb)!=-1);
	ACE_DEBUG((LM_DEBUG,"(%t)�����Ϣ�ɹ�\n"));
}
int My_client::svc(void)//���̲߳�ʹ��
{
	ACE_DEBUG((LM_DEBUG,"ִ���߳�\n"));	
	while(recv_message())
	{}
	//Reactor::instance()->remove_handler(this,ACE_Event_Handler::READ_MASK);
	ACE_DEBUG((LM_DEBUG,"�˳��߳�\n"));	
	return 0;
}
int My_client::handle_input(ACE_HANDLE)
{
	//construct_message(MESSAGE_COME,ACE_OS::strlen(MESSAGE_COME));
	if(TimerId != 0 )
	{
		Reactor::instance()->cancel_timer(TimerId);
		TimerId = Reactor::instance()->schedule_timer(this,0,ACE_Time_Value(10));
	}
	my_manager_->activation_queue_.enqueue(new CRevc_Object(this));
	return 0;
}
int My_client::handle_close(ACE_HANDLE handle, ACE_Reactor_Mask mask)
{		
	if(mask ==ACE_Event_Handler::TIMER_MASK)
	{
		ACE_DEBUG((LM_DEBUG,"(%t)�û��˳���(��ʱ)\n"));
		//ACE_CLR_BITS(mask_,mask);
		Reactor::instance()->remove_handler(this->get_handle(), mask_ |ACE_Event_Handler::DONT_CALL);
		mask_ = 0;
	}
	else if(mask ==ACE_Event_Handler::READ_MASK)
	{
		ACE_DEBUG((LM_DEBUG,"(%t)�û�����\n"));
		ACE_CLR_BITS(mask_,mask);
		Reactor::instance()->remove_handler(this->get_handle(), mask |ACE_Event_Handler::DONT_CALL);
		if(mask_!=0)
			Reactor::instance()->remove_handler(this->get_handle(), mask |ACE_Event_Handler::DONT_CALL);
		mask_=0;
	}
	if(mask_ == 0)
	{
		this->peer().close();
		ACE_DEBUG((LM_DEBUG,"(%t) ɾ���ͻ�\n"));
		delete this;
	}
	return 0;
}




CRevc_Object::CRevc_Object(My_client * client,unsigned long priority)
:client_(client)
{	
	//ACE_DEBUG((LM_DEBUG, "(%t) ���� \n"));
}
int CRevc_Object::call (void)
{
//	ACE_Method_Object::call();
	char msg[50] = {0};
	//Check if peer aborted the connection
	int len = client_->peer().recv(msg,50);
	if(len<=0)
	{
		ACE_DEBUG((LM_DEBUG,"(%t)���ӶϿ�\n"));
		//construct_message(CLOSE_CLIENT,ACE_OS::strlen(CLOSE_CLIENT));
		client_->my_manager_->delStream(client_->peer());
		Reactor::instance()->remove_handler(client_,ACE_Event_Handler::READ_MASK);
		//peer().close();				
		//return 0; //de-register from the Reactor.
	}
	else
	{
		ACE_DEBUG((LM_DEBUG,"(%t)���յ�:%s \n",msg));
		/*  ��������  */
	}
	return 0;
}