/* 2-7.c  
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

	strncat(array1, array2, 6);     // 6 byte ��ŭ�� ���ڿ� ����
	
    printf("��ü ���ڿ� ���: ");
	puts(array1);	
	return 0;
}*/