/* 5-14.c 
#include <stdio.h>
int main(void)
{
		char c=3;
		double d=3.1;
			
		void* vx;
			
		vx=&c;   // char�� ���� c�� �ּҸ� ����
		printf("vx�� �ּ� �� : %x\n", vx);
		// printf("vx�� �� : %d\n",*vx);   // ����
			
		vx=&d;    // double�� ���� d�� �ּҸ� ����
		printf("vx�� �ּ� �� : %x\n", vx);
		// printf("vx�� �� : %lf\n", *vx);   // ����
			
		return 0;
}
*/
