/* 3-15.c 
#include <stdio.h>
void add(double num1, double num2);
	
int main( )
{
		double x=3.1, y=5.1;
		void (*pointer) (double, double);	// �Լ� ������ ����
		
		printf("add �Լ��� �ּ� : %x\n", add);	// add �Լ��� �ּ� ���
		printf("�Լ� �������� �ּ� : %x \n", &pointer);	// �Լ� �������� �ּ� ���
		
		pointer=add;		// �Լ� ������ pointer�� �Լ��� ���� �ּ� add�� ����
		pointer(x, y);	// �Լ� �����͸� �̿��� ȣ��
		
		return 0;
}
	
void add(double num1, double num2)
{
		double result;
		result=num1+num2;
		printf("%lf + %lf = %lf�Դϴ�.\n", num1, num2, result);
}*/