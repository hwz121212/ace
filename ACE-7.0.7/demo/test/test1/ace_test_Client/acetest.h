//#include "ace/Event_Handler.h"

#include "ace/Log_Msg.h"
#include "ace/Reactor.h"
#include "ace/Svc_Handler.h"
#include "ace/Synch.h"
#include "ace/os.h"
#include "ace/SOCK_Connector.h"

#include <ace/Activation_Queue.h>
#include <ace/Future.h>
//#include <ace/Method_Object.h>



#define PORT_NO "127.0.0.1:5555"   //服务器IP及端口
#define BUF_LEN 1024
typedef ACE_SOCK_Connector Connector;


//typedef ACE_Acceptor<ACE_Task,ACE_SOCK_ACCEPTOR>  MyAcceptor;
class My_Manager_Handler: public ACE_Task<ACE_MT_SYNCH>
{
private:
	char *name_;
	ACE_Activation_Queue activation_queue_;
	ACE_thread_t thread_names;
	char data [BUF_LEN];
	int  ConnectCnt;
	ACE_Thread_Mutex mutex_;
	ACE_SOCK_Stream *peer_;
public:

	int  open (void *);
	int  svc (void);
	int  setStream(ACE_SOCK_Stream & peer);
	bool delStream(ACE_SOCK_Stream & peer);
	bool  work(char *data_buf,int len);

	bool send_buf(int send_flag,char *data,int len);

};


class My_Connect_Handler: public ACE_Event_Handler
{
public:

	My_Connect_Handler(ACE_Addr &addr,My_Manager_Handler *c_input);

	int handle_input(ACE_HANDLE);

	ACE_HANDLE get_handle()const;

	ACE_SOCK_Stream &peer_i();
private:
	ACE_Thread_Mutex mutex_;
	My_Manager_Handler *c_input_;
	Connector peer_connector;
	ACE_SOCK_Stream peer_;
	char data [BUF_LEN];
};