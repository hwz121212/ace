#ifndef MY_CLIENTS_
#define MY_CLIENTS_
#include "My_Manager.h"
#include <ace/Method_Request.h>


class My_client:	public ACE_Svc_Handler<ACE_SOCK_STREAM,ACE_MT_SYNCH>
{
public:
	ACE_Reactor_Mask mask_;
	ACE_thread_t thread_names;
	My_Manager_Handler *my_manager_;
	long TimerId;
public:
	int open(void*);
	bool recv_message(void);
	virtual int handle_timeout (const ACE_Time_Value &tv,const void *arg);
	int construct_message(char *data,int len);
	int svc(void);
	int handle_input(ACE_HANDLE);
	int handle_close(ACE_HANDLE handle, ACE_Reactor_Mask mask);
};


class CRevc_Object: public ACE_Method_Request
{
public:
	CRevc_Object(My_client * client,unsigned long priority = 0);
	int call (void);

private:
	My_client * client_;
};
#endif