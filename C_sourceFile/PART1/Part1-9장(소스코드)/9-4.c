/*  9-4.c 
#include <stdio.h>
int sum(void);						// �Լ��� ����(10 ����)
int input(void);					// �Լ��� ����(10 ����)
void output(int x);				// �Լ��� ����(01 ����)
	
int main(void)
{
		int result;
		printf("---���α׷� ����---\n");
		printf("���� �� ���� �Է��ϼ��� : ");
			
		result=sum( );				// �Լ��� ȣ��(10 ����)
		output(result);				// �Լ��� ȣ��(01 ����)
			
		return 0;
}
	
int sum(void)					// �Լ��� ����(10 ����)
{
		int i=0, total=0, num=0;
		num=input( );				// �Լ��� ȣ��(10 ����)
		
		for(i=1; i<=num; i++)
		{
			total=total+i;
		}
		return total;
}
	
int input(void)					// �Լ��� ����(10 ����)
{
		int val;
		scanf("%d", &val);
		return val;
}
void output(int x)				// �Լ��� ����(01 ����)
{
		printf("��� : %d \n", x);
		return;
}
*/