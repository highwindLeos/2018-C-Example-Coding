/* 5-15.c 
#include <stdio.h>
void main( )
{
		char c=3;
		double d=3.1;		

		void* vx=NULL;
		
		vx=&c;
		printf("vx�� ������ �� : %x\n", vx);
		printf("*vx�� �� : %d\n", *(char*)vx);		// ���� ����ȯ(char *)
		
		vx=&d;
		printf("vx�� ������ �� : %x\n", vx);
		printf("*vx�� �� : %lf\n", *(double*)vx);		// ���� ����ȯ(double *)
		
}
*/