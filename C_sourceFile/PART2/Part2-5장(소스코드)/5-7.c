/* 5-7.c 
#include <stdio.h>
	
int* input( );				// �Լ��� ����
	
int main(void)
{
		int* p=NULL;
			
		p=input( );			// �Լ��� ȣ��
		printf("%d \n", *p);
			
		return 0;
}
	
int* input( )				// �Լ��� ����
{
		static int num1;		// ���� ���� ����
		scanf("%d", &num1);
	
		return &num1;
}
*/