/* 1-24.c 
#include<stdio.h>

struct point
{
	int x;               
	int y;     
};

void function (struct point* call);  // �Լ��� ����

int main(void)
{
	struct point p = {10, 20};
	function(&p);  // �ּҿ� ���� ȣ�� (call by reference)

	return 0;
}

void function (struct point* call)  // �Լ��� ����
{
	printf("%d %d \n",   call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);
}
 */

