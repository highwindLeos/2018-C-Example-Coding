/* 5-1.c
#include <stdio.h>
	
int func(int i);			// �Լ��� ����, 11 ����
	
void main( )
{
		int a=10;
		int result=0;
		
		result=func(a);		// �Լ��� ȣ��, ���� ���� ȣ��
		printf("%d\n", result);
		printf("%d\n", a);
}
	
int func(int i)			// �Լ��� ����
{
		i=i+1;
		return i;
}
 */