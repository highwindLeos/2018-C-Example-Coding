/* 5-10.c 
#include <stdio.h>

char* string1(void);		// �Լ��� ����
char* string2(void);		// �Լ��� ����
	
int main(void)
{
		char* p1=NULL;
		char* p2=NULL;
		
		p1=string1( );		// �Լ��� ȣ��
		p2=string2( );		// �Լ��� ȣ��
		
		printf("%s \n", p1);
		printf("%s \n", p2);
		return 0;
}
	
char* string1(void)		// �Լ��� ����
{
		static char str[ ]="Good";		// ���� ������ ����
		return str;					// �迭�� ���� �ּ� ��ȯ
}
	
char* string2(void)				// �Լ��� ����
{
		static char str[ ]="morning";	// ���� ������ ����
		return str;					// �迭�� ���� �ּ� ��ȯ
}
*/