#include <stdio.h>
int main(void)
{
	printf("\t Hello C! \n Hello World! \n");
	printf("ū ����ǥ: \" \" \n");
	printf("���� ����ǥ: \' \' \n");
	printf("��������: \\ \n");
	printf("-------------------------------------- \n");
	printf("65�� ���ڷ� ǥ���ϸ� %c �Դϴ�. \n", 65);
	printf("65�� 10������ ǥ���ϸ� %d �Դϴ�. \n", 65);
	printf("A ���ڸ� 10������ ǥ���ϸ� %d �Դϴ�. \n", 'A');
	printf("A ���ڸ� ���ڷ� ǥ���ϸ� %c �Դϴ�. \n", 'A');
	printf("-------------------------------------- \n");
	printf("65�� 10������ ǥ���ϸ� %d,\n65�� 8������ ǥ���ϸ� %o, \n65�� 16������ ǥ���ϸ� %x,\n65�� ���ڷ� ǥ���ϸ� %c �Դϴ�.\n", 65,65,65,65);

	getchar(); // ���ڸ� �Է¹޴´�.

	return 0;
}

/* #include<stdio.h>
int main(void) {
	printf("--------Le\tos----------------------- \n");
	printf("Hello's \"Le      os\" world \n");
	printf("------------------------------- \n");
	printf("c:\\work \n");
	printf("------------------------------- \n");
	system("pause");

	return 0; // function end
} */
