/* 2-11.c 
#include<stdio.h>
int main(void)
{
	int array[2][2] = {10,20,30,40};

	printf("%d %d \n", *&array[0][0],*&array[0][1]);			// 10, 20 ���
	printf("%d %d \n", *&array[1][0],*&array[1][1]);			// 30, 40 ���

	printf("-------------------\n");
	printf("%d %d \n", *array[0]+0, *array[0]+1 );				// 10, 11 ���
	printf("%d %d \n", *array[1]+0, *array[1]+1 );				// 30, 31 ���

	printf("-------------------\n");
	printf("%d %d \n", **(array+0)+0, **(array+0)+1 );		// 10, 11 ���
	printf("%d %d \n", **(array+1)+0, **(array+1)+1 );		// 30, 31 ���

	return 0;
} */