/* 1-23.c
#include<stdio.h>

struct point                            // ����ü ����
{
	int x;               
	int y;     
};

void function (struct point call);      // �Լ��� ����

int main(void)
{
	struct point p = {10, 20};
	function(p);                        // ���� ���� ȣ�� (call by value)

	return 0;
}

void function (struct point call)       // �Լ��� ����
{
	printf("%d %d \n", call.x, call.y); // 10, 20 ���
}
 
 */ 