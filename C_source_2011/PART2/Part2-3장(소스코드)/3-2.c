/* 3-2.c 
#include <stdio.h>
int main(void)
{
		// ������ ���� ����
		char* cp=NULL;		// char�� �ּҸ� �����ϴ� ������ ���� cp
		int* ip=NULL;			// int�� �ּҸ� �����ϴ� ������ ���� ip
		
		printf("%x %x %x\n", &cp, cp, *&cp);
		printf("%x %x %x\n", &ip, ip, *&ip);
		
		printf("%d %d \n", sizeof(char*), sizeof(int*));	// 4, 4 ���
		printf("%d %d \n", sizeof(cp), sizeof(ip));			// 4, 4 ���
		
		return 0;
}*/

