// ace_test_Client.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "acetest.h"

int main(int argc, char * argv[])
{
	My_Manager_Handler * my_connect = new My_Manager_Handler;

	my_connect->My_Manager_Handler::open(NULL);
	char str[50];
	ACE_OS::sleep(2);
	while(1)
	{		
		ACE_OS::memset(str,0,50);
		//ACE_DEBUG((LM_DEBUG,"���뷢�͵��ַ���:"));
		scanf("%s",str);
		my_connect->send_buf(12,str,ACE_OS::strlen(str));
	}
	return 0;
}