/* 5-5.c
#include <stdio.h>
	
void func(int* p);							// �Լ��� ����
	
int main(void)
{
		int array[2][4]={10,20,30,40,50,60,70,80};
		func(array);							// �Լ��� ȣ��
		return 0;
}
	
void func(int* p)							// �Լ��� ����
{
		printf("%d %d %d %d %d %d %d %d \n", p[0],p[1],p[2],p[3],p[4],p[5],p[6],p[7]); // OK
		printf("%d %d %d %d \n", p[0][0], p[0][1], p[0][2], p[0][3]);	// ����
		printf("%d %d %d %d \n", p[1][0], p[1][1], p[1][2], p[1][3]);	// ����
} 
*/