/* 
1-1 sum = 7 +7+7+7+... 7  : 10항 까지의 합계
1-2 sum = 1+2+3+4... 10항까지의 합계 구하는 프로그램을 작성한다.
1-3 sum = 2+4+6+8... (20) 10항 까지의 합계 구하기 프로그램을 작성한다.
1-4 sum = 1+3+5+7... (?) 를 10항 까지의 합계 구하는 프로그램을 작성한다.
1-5 sum = 1+2+4+7+11... 10항 까지의 합계를 구하는 프로그램을 작성한다.
1-6 sum = 2+3+5+8+12... 10항 까지의 합계를 구하는 프로그램을 작성한다.
1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다. (팩토리얼)
1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다. (팩토리얼)
1-9 sum = 1+1+2+3+4+8+13... 10항 까지의 합계를 구하는 프로그램을 작성한다. (피보나치 수열) 
*/

// 1-10 sum =  (1 * 77) + (2 * 76) + (3 * 75) ... (77*1)
#include <stdio.h>
int main(void)
{
	//p = a + b
	int cnt;
	int a = 1, b = 77, p, sum = a * b;

	printf("---------------초기값------------------- \n");
	printf("a = %d . b = %d . sum = %d \n", a, b, sum);
	printf("------------------------------ \n");

	for (cnt = 1; cnt < 78; cnt++) {
		p = a * b;
		sum = sum + p;
		printf("cnt = %d. a = %d. b = %d. p = %d. sum = %d. \n", cnt, a, b, p, sum);
		b = b - 1; // 수의 법칙을 찾아서 해당 값을 계산해줌.
		a = a + 1; // 계산된 값이 b항이 되어야한다.

	}
	printf("---------------------------------------- \n");
	printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
	system("pause");
	return 0;
}




//1-9 sum = 1 + 1 + 2 + 3 + 5 + 8 + 13... 10항 까지의 합계를 구하는 프로그램을 작성한다. (피보나치 수열)
/* #include <stdio.h>
int main(void)
{
	//p = a + b
	int cnt;
	int a = 1, b = 1, p, sum = a + b;

	printf("---------------초기값------------------- \n");
	printf("a = %d . b = %d . sum = %d \n", a, b, sum);
	printf("------------------------------ \n");

	for (cnt = 3; cnt < 11; cnt++) {
		p = a + b;
		sum = sum + p;
		printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
		a = b; // 
		b = p; // 계산된 값이 b항이 되어야한다.

	}
	printf("---------------------------------------- \n");
	printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
	system("pause");
	return 0;
} */

//1-8-1 sum = 1! + 2! + 3! + 4! + ... 10항 까지의 합계를 구하는 프로그램을 작성한다. (팩토리얼)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int f = 1, i = 0, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		i = i + 1;
		f = f * i;
		sum = sum + f;
		printf("cnt = %d. i = %d. f = %d. sum = %d. \n", cnt, i, f, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, i, f, sum);// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
 */

//1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다. (팩토리얼)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int j = 1, i = 1, sum = 1;

	for (cnt = 1; cnt < 10; cnt++)
	{
		j = j + 1;
		i = i * j;
		sum = sum + i;
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다. (개차수열)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int j = 1, i = 1, sum = 1;

	for (cnt = 1; cnt < 11; cnt++)
	{
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-7-1 sum = 1+3+6+10+15+21... 10항 까지의 합계를 구하는 프로그램을 작성한다. (개차수열 문제)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int j = 1, i = 1, sum = 1;

	for (cnt = 1; cnt < 11; cnt++)
	{
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);
	}
		printf("------------------------------ \n");
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
		system("pause");
		return 0;
} */

//1-6 sum = 2+3+5+8+12... 10항 까지의 합계를 구하는 프로그램을 작성한다. (개차수열 문제)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int j = 0, i = 2, sum = 2;

	for (cnt = 1; cnt < 10; cnt++)
	{
		j = j + 1;
		i = i + j;
		sum = sum + j;
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);

	}
	printf("------------------------------ \n");
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-5 sum = 1+2+4+7+11... 10항 까지의 합계를 구하는 프로그램을 작성한다. (개차수열 문제)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int j = 0, i = 1, sum = 1;

	for (cnt = 1; cnt < 10; cnt++)
	{
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);

	}
	printf("------------------------------ \n");
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);	// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-4 sum = 1+3+5+7... (?) 를 10항 까지의 합계 구하는 프로그램을 작성한다. (홀수 덧샘)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int i = -1, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		i = i + 2;
		sum = sum + i; //초기값이 들어오는 것을 신경써서 프로그래밍하라.
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-3 sum = 2+4+6+... (20) 10항 까지의 합계 구하기 프로그램을 작성한다. (짝수 덧셈)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int i = 0, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		i = i + 2;
		sum = sum + i;
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-2 sum = 1+2+3+4... 10항까지의 합계 구하는 프로그램을 작성한다.
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int i = 0, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		i = i + 1;
		sum = sum + i; 
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

//1-1 sum = 7+7+7+7+... 7  : 10항 까지의 합계
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		sum = sum + 7; // 누적계산
		printf("cnt = %d. sum = %d. \n", cnt, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. sum = %d. \n", cnt, sum);	// for문에서 cnt의 값을 증가한후 조건을 비교한후 빠져나옴.
	system("pause");
	return 0;
} */

/* #include<stdio.h>
int main(void)
{
	int appleBox = 30;
	int grapeBox = 20;
	int total;

	total = appleBox + grapeBox; // 두 변수의 값을 더해서 total 에 대입
	printf("총 %d 박스가 있습니다\n", total);

	system("pause");
	return 0;
} */

/* #include<stdio.h>
int main(void)
{
   int a = 0;  // 변수 a (메모리 공간 a)
   int sum;  // 변수 b (메모리 공간 b)

   a = a + 5;

   sum = 2;
   sum = sum + 5;



   printf("a변수 값은 = %d\n", a);  // 변수a에 저장된 값을 출력 
   printf("sum변수 값은 = %d\n", sum);  // 변수b에 저장된 값을 출력

   system("pause");
   return 0;
} */