// aceTest5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "My_Acceptor.h"

int main(int argc, char* argv[])
{
	My_Manager_Handler * connect_Manager = new My_Manager_Handler;
	ACE_DEBUG((LM_DEBUG,"Thread: (%t) main\n"));
	ACE_INET_Addr addr(5555);//�������˿�
	//ACE_DEBUG((LM_DEBUG,"Thread: (%t) main\n"));	
	connect_Manager->open(NULL);//�������ӹ�����
	Acceptor myacceptor(addr,Reactor::instance(),connect_Manager);//����������

	char str[50];
	ACE_OS::sleep(1);
	while(1)
	{		
		//Reactor::instance()->handle_events();
		ACE_OS::memset(str,0,50);
		//ACE_DEBUG((LM_DEBUG,"���뷢�͵��ַ���:\n"));
		scanf("%s",str);
		connect_Manager->send_buf(12,str,ACE_OS::strlen(str));//Ⱥ�����ͻ���
	}
	return 0;
}
