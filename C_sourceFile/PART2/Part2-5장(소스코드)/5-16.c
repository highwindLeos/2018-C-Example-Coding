/*  5-16.c 
#include <stdio.h>
void main( )
{
		char c=3;
		double d=3.1;
		
		void* vx=NULL;
			
		vx=&c;
		printf("vx�� ������ �ּ� : %x\n", vx);
		printf("*vx�� �� : %d\n", *(char*)vx);			// ���� ����ȯ(char *)
			
		vx=&d;
		printf("vx�� ������ �ּ�  : %x \n", vx);
		printf("*vx�� �� : %lf\n", *(double*)vx);		// ���� ����ȯ(double *)
			
		vx=&c;
		*(char*)vx=5;
		printf("c�� ������ �� : %d\n", c);
		printf("*vx�� �� : %d\n", *(char*)vx);
			
		vx=&d;
		*(double*)vx=5.1;
		printf("d�� ������ �� : %lf \n", d);
		printf("*vx�� �� : %lf\n", *(double*)vx);
			
}
*/