/* 9-14.c 
#include <stdio.h>
int factorial(int n);				// �Լ��� ����(11 ����)
	
int main(void)
{
		int a;
		int result;					// ���丮�� ��� ����� ������ ����
		
		printf("���� �Է� : " );
		scanf("%d", &a);
		
		result=factorial(a);			// �Լ��� ȣ�� 
		printf( "%d ���丮���� : %d�Դϴ�. \n", a, result);
		return 0;
}
	
int factorial(int n)				// �Լ��� ����
{
		if (n<=1)
			return 1;
			
		else
			return n * factorial(n-1);
}
*/