/*
#define ACE_HAS_EVENT_POLL
#define ACE_HAS_DEV_POLL
#include "ace/Dev_Poll_Reactor.h"
#include "ace/Dev_Poll_Reactor.cpp"
*/
#ifndef MY_MANAGER_
#define MY_MANAGER_

#include <ace/Acceptor.h>
#include <ace/SOCK_Acceptor.h>
#include <ace/Activation_Queue.h>
#include <ace/Method_Request.h>
#include <ace/Timer_Queue.h>

//#include "ace/Reactor.h"
//#include "ace/Svc_Handler.h"
//#include "ace/Thread.h"
//#include "ace/Log_Msg.h"
//#include "ace/OS.h"
//#include <ace/Future.h>
//#include "ace/Synch.h"
//#pragma comment (lib,"ACEd.lib")


#define PORT_NO 5555
#define BUF_LEN 1024
#define Thread_Cnt      2
#define CLOSE_CLIENT    "error"
#define MESSAGE_COME    "msg"


typedef ACE_Singleton<ACE_Reactor,ACE_Null_Mutex> Reactor;
//typedef ACE_Reactor Reactor;
//typedef ACE_Acceptor<ACE_Task,ACE_SOCK_ACCEPTOR>  MyAcceptor;
class My_Manager_Handler: public ACE_Task<ACE_MT_SYNCH>
{
private:
	char *name_;	
	ACE_thread_t thread_names[Thread_Cnt];
	char data [BUF_LEN];
	int  ConnectCnt;
	ACE_Thread_Mutex mutex_my;
	ACE_SOCK_Stream *Sock_Stream_list[20];

public:
	ACE_Activation_Queue activation_queue_;

public:
	My_Manager_Handler();
	int  open (void *);
	int  svc (void);
	int  AddStream(ACE_SOCK_Stream & peer);
	bool delStream(ACE_SOCK_Stream & peer);
	bool work(ACE_SOCK_Stream &peer ,char *data_buf,int len);
	bool send_buf(int send_flag,char *data,int len);
};
#endif