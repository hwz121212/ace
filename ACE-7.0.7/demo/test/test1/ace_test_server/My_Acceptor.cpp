#include "stdafx.h"
#include "My_Acceptor.h"



Acceptor::Acceptor(ACE_INET_Addr addr,ACE_Reactor *Reactor,My_Manager_Handler *my_manager):ACE_Acceptor( addr,Reactor)
{
	ACE_DEBUG((LM_DEBUG,"开始监听连接\n"));
	my_manager_ = my_manager;
}
int Acceptor::make_svc_handler(My_client *&my_handle)
{
	ACE_Acceptor::make_svc_handler(my_handle);	
	my_handle->my_manager_=my_manager_;
	return 0;
}
int Acceptor::accept_svc_handler(My_client * my_handle)
{
	ACE_Acceptor::accept_svc_handler(my_handle);
	return 0;
}
int Acceptor::activate_svc_handler(My_client *my_handle)
{
	ACE_Acceptor::activate_svc_handler(my_handle);
	my_manager_->AddStream(my_handle->peer());
	return 0;
}
