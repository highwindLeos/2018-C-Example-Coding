/* 2-3.c
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[] = "Hello C";
	char array2[] = "�ȳ��ϼ���";

	printf("���� ���ڿ��� ����: %d \n", strlen(array1) );      // 7 ���
	printf("�ѱ� ���ڿ��� ���� %d \n", strlen(array2) );  // 10 ���

	printf("���� ���ڿ��� ����: %d \n", sizeof(array1) );  // 8 ���
	printf("�ѱ� ���ڿ��� ����: %d \n", sizeof(array2) );  // 11 ���

	return 0;
}  */