/* 9-5.c 
#include <stdio.h>
void func_A (void);						// �Լ��� ����(00 ����)
	
int main(void)
{
		int aaa=10;								// main( ) �Լ��� ���� ���� aaa
		printf("main( ) �Լ��� aaa �� : %d\n", aaa );
		
		func_A( );								// �Լ��� ȣ��
		return 0;
}
	
void func_A(void)								// �Լ��� ����
{
		int aaa=20;								// func_A( ) �Լ��� ���� ���� aaa
		int bbb=30;								// func_A( ) �Լ��� ���� ���� bbb
		
		printf("func_A( ) �Լ��� aaa �� : %d\n", aaa );
		printf("func_A( ) �Լ��� bbb �� : %d\n", bbb );
		return ;
}
*/