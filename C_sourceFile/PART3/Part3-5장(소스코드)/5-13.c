/* 5-13.c 
#include <stdio.h>
	
#define CODE 3
	
int main(void)
{
	
		#if(CODE==1)			// �Ǽ��� ������ ����
			double num1=0.0, num2=0.0, result=0.0;
			printf("�Ǽ� �� ���� �Է��ϼ���>>");
			scanf("%lf %lf", &num1, &num2);
			result=num1 / num2;
			printf("������ ��� : %lf \n", result);
			
		#else					// ������ ���� ����
			int num1=0, num2=0, result=0;
			printf("���� �� ���� �Է��ϼ���>>");
			scanf("%d %d", &num1, &num2);
			result=num1 + num2;
			printf("���� ��� : %d \n", result);
		#endif
		
		return 0;
}*/
