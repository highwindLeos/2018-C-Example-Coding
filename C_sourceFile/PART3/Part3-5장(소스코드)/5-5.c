/* 5-5.c 
#include <stdio.h>
	
#define MUL(x, y) x*y				// ��ũ�� �Լ� ����
	
int main(void)
{
		int a, b;
		double c, d;
		
		printf("�� ���� ������ �Է��ϼ��� : ");
		scanf("%d%d", &a, &b);
		printf("%d * %d = %d \n", a, b, MUL(a, b));	// ��ũ�� �Լ� ȣ��
		
		printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
		scanf("%lf%lf", &c, &d);
		printf("%lf * %lf = %lf\n", c, d, MUL(c, d));	// ��ũ�� �Լ� ȣ��
		
		return 0;
}
*/