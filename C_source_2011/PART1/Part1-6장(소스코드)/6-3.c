 /* 6-3.c 
#include <stdio.h>
int main(void)
{
		signed char num1=130;		// -128(�ּڰ�) ~ 127(�ִ�)�� ������ ǥ�� ����
		unsigned char num2=130;	// 0(�ּڰ�) ~ 256(�ִ�)�� ������ ǥ�� ����
		
		printf("%d \n", num1);	// -126 ���
		printf("%u \n", num2);	// 130 ���
		
		return 0;
}
*/