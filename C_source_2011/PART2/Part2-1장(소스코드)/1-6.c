/* 1-6.c
#include<stdio.h>
int main(void)
{
	int array[3] = {1,2,3};

	printf("%x %x %x \n",array+0,array+1,array+2);          //16���� �ּ����, 4 byte ����
	printf("%x %x %x \n",&array[0],&array[1],&array[2]);  //16���� �ּ����, 4 byte ����

    return 0;
} */