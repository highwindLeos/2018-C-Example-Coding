/* 1-28.c 
#include<stdio.h>

union point              // ����ü ����
{
	int x;               
	int y;     
};

int main(void)
{
	union point p;       // ����ü ���� ���� 
	p.x = 10;            

	printf("%d %d \n", p.x, p.y);

	return 0;
}
*/
