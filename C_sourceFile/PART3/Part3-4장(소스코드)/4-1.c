/*  4-1.c
#include <stdio.h>
	
	int a=10;						// ���� ���� a ����
	
	int main(void)
	{
		int num1=10, num2=20;		// ���� ���� num1, num2 ����
		static int s=20;				// ���� ���� s ����
		
		printf("������ ��� : %d %d %d %d \n", a, num1, num2, s);
		printf("�ڵ� ���� : %x %x \n", main, printf);			// �Լ� �̸�
		printf("���� ���� : %x %x \n", &num1, &num2);		// ���� ����
		printf("������ ���� : %x %x \n", &a, &s);				// ���� ����, ���� ����
		
		return 0;	
}
 */