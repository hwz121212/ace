#ifndef MY_ACCEPTOR_
#define MY_ACCEPTOR_
#include "My_Clients.h"


//typedef ACE_Acceptor<My_client,ACE_SOCK_ACCEPTOR> Acceptor;
class Acceptor:public ACE_Acceptor<My_client,ACE_SOCK_ACCEPTOR>
{
public:
	My_Manager_Handler *my_manager_;
public:
	Acceptor(ACE_INET_Addr addr,ACE_Reactor *Reactor,My_Manager_Handler *my_manager);
	int make_svc_handler(My_client *&my_handle);
	int accept_svc_handler(My_client *my_handle);
	int activate_svc_handler(My_client *my_handle);
};
#endif