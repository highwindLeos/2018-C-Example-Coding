#include <stdio.h>
int main(void)
{
	printf("\t Hello C! \n Hello World! \n");
	printf("큰 따옴표: \" \" \n");
	printf("작은 따옴표: \' \' \n");
	printf("역슬레시: \\ \n");
	printf("-------------------------------------- \n");
	printf("65를 문자로 표현하면 %c 입니다. \n", 65);
	printf("65를 10진수로 표현하면 %d 입니다. \n", 65);
	printf("A 문자를 10진수로 표현하면 %d 입니다. \n", 'A');
	printf("A 문자를 문자로 표현하면 %c 입니다. \n", 'A');
	printf("-------------------------------------- \n");
	printf("65를 10진수로 표현하면 %d,\n65를 8진수로 표현하면 %o, \n65를 16진수로 표현하면 %x,\n65를 문자로 표현하면 %c 입니다.\n", 65,65,65,65);

	getchar(); // 문자를 입력받는다.

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
