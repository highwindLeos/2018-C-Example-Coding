#include <stdio.h>
int main(void)
{
	printf("\t Hello C! \n Hello World! \n"); // \t : tab 을 출력(공백) \n  : 줄바꿈
	printf("큰 따옴표: \" \" \n"); // escape 문자 \ 뒤로 타이핑.
	printf("작은 따옴표: \' \' \n"); // escape 문자 \ 뒤로 타이핑.
	printf("역슬레시: \\ \n"); // escape 문자 \ 뒤로 타이핑.
	printf("-------------------------------------- \n");
	printf("65를 문자로 표현하면 %c 입니다. \n", 65); // 2번째 인자값을 %c 로 출력 : 문자.
	printf("65를 10진수로 표현하면 %d 입니다. \n", 65); // 2번째 인자값을 %d 로 출력 : 10진수.
	printf("A 문자를 10진수로 표현하면 %d 입니다. \n", 'A'); // 2번째 인자값을 %d 로 출력 : 10진수.
	printf("A 문자를 문자로 표현하면 %c 입니다. \n", 'A'); // 2번째 인자값을 %c 로 출력 : 문자.
	printf("-------------------------------------- \n");
	printf("65를 10진수로 표현하면 %d,\n65를 8진수로 표현하면 %o, \n65를 16진수로 표현하면 %x,\n65를 문자로 표현하면 %c 입니다.\n",
			65,65,65,65);
	// 65를 각각 %d %o %x %c 로 출력할때. 인자의 구분으로 , 를 써서 각각 순서대로 출력. 
	// %d : 10진수  
	// %o : 8진수 
	// %x : 16진수 
	// %c : 문자열.

	getchar(); // 문자를 입력받는다. (precess 를 잠시 멈춤)
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
