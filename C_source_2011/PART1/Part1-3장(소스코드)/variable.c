//1-1 sum = 7 +7+7+7+... 7  : 10항 까지의 합계
//1-2 sum = 1+2+3+... 10 를 구하는 프로그램을 작성한다.
//1-3 sum = 2+4+6+... (20) 10항 까지의 합계 구하기 프로그램을 작성한다.
//1-4 sum = 1+3+5+... (?) 를 10항 까지의 합계 구하는 프로그램을 작성한다.
//1-5 sum = 1+2+4+7+11... 10항 까지의 합계를 구하는 프로그램을 작성한다.
//1-6 sum = 2+3+5+8+12... 10항 까지의 합계를 구하는 프로그램을 작성한다.
//1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다.
//1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10항 까지의 합계를 구하는 프로그램을 작성한다.
//1-9 sum = 1+1+2+3+4+8+13... 10항 까지의 합계를 구하는 프로그램을 작성한다.

#include <stdio.h>
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
}

/* #include<stdio.h>
int main(void)
{
	int appleBox = 30;
	int grapeBox = 20;
	int total;

	total = appleBox + grapeBox;
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