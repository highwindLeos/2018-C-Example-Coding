/* 1-25.c 
#include<stdio.h>

struct point
{
	int x;               
	int y;     
};

struct point function(void);  // �Լ��� ����

int main(void)
{
	struct point p; 

	p = function();               // �Լ� ȣ��
	printf("%d %d \n", p.x, p.y);
	
	return 0;
}

struct point function(void)        // �Լ��� ����
{
	struct point call = {10, 20};
	return call;                    // ����ü ���� call�� 13������ ��ȯ
}
 */