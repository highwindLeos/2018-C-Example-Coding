/* 1-27.c 
#include<stdio.h>

union point              // ����ü ����
{
	int x;               
	int y;     
};

struct student           // ����ü ���� 
{
	int a;
	int b;
};

int main(void)
{
	printf("%d %d \n",sizeof(union point), sizeof(struct student) );

	return 0;
}
*/