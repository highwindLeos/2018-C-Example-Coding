/* 2-6.c 
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[100];
	char array2[50];

	printf("ù��° ���ڿ� �Է�: ");
	gets(array1);

	printf("�ι�° ���ڿ� �Է�: ");
	gets(array2);

	strcat(array1, array2);   // ���ڿ� ����

    printf("���յ� ���ڿ� ���: ");
	puts(array1);	
	return 0;
}  */