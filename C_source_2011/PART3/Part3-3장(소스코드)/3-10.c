/* 3-10.c
#include<stdio.h>
int main(void)
{
	int age;
	char name[20];
	
	printf("���� �Է�: ");
	scanf("%d",&age);

	fflush(stdin);  // �Է� ���۸� ����.
	
	printf("�̸��� �Է�: ");
	fgets(name, sizeof(name), stdin);

	printf("%d\n",age);
	printf("%s\n",name);
	
	return 0;
}
 */