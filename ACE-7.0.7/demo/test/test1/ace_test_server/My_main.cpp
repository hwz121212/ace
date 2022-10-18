// aceTest5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "My_Acceptor.h"

int main(int argc, char* argv[])
{
	My_Manager_Handler * connect_Manager = new My_Manager_Handler;
	ACE_DEBUG((LM_DEBUG,"Thread: (%t) main\n"));
	ACE_INET_Addr addr(5555);//服务器端口
	//ACE_DEBUG((LM_DEBUG,"Thread: (%t) main\n"));	
	connect_Manager->open(NULL);//启动连接管理器
	Acceptor myacceptor(addr,Reactor::instance(),connect_Manager);//启动接收器

	char str[50];
	ACE_OS::sleep(1);
	while(1)
	{		
		//Reactor::instance()->handle_events();
		ACE_OS::memset(str,0,50);
		//ACE_DEBUG((LM_DEBUG,"输入发送的字符串:\n"));
		scanf("%s",str);
		connect_Manager->send_buf(12,str,ACE_OS::strlen(str));//群发到客户上
	}
	return 0;
}
