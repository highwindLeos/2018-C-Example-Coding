/* 9-3.c 
#include <stdio.h>
double divide(double x, double y);		// �Լ��� ����(11 ����)
double input(void);									// �Լ��� ����(10 ����)
void output(double x);							// �Լ��� ����(01 ����)
void information(void);							// �Լ��� ����(00 ����)
	
int main(void)
{
		double num1, num2, result;
	
		information( );										// �Լ��� ȣ��(00 ����)
		printf("ù ��° �Ǽ� �Է� : ");
		num1=input( );									// �Լ��� ȣ��(10 ����)
			
		printf("�� ��° �Ǽ� �Է� : ");
		num2=input( );									// �Լ��� ȣ��(10 ����)
	
		result=divide(num1, num2);				// �Լ��� ȣ��(11 ����)
		output(result);
		
		return 0;
}
	
double divide(double x, double y)			// �Լ��� ����(11 ����)
{
		double val;
		val=x/y;
		return val;
}
double input(void)										// �Լ��� ����(10 ����)
{
		double val;
		scanf("%lf", &val);
		return val;
}
void output(double x)									// �Լ��� ����(01 ����)
{
		printf("������ ��� : %lf \n", x);
		return;
}
void information(void)								// �Լ��� ����(00 ����)
{
		printf("---���α׷� ����---\n");
		return;
}*/
