/* 
1-1 sum = 7 +7+7+7+... 7  : 10�� ������ �հ�
1-2 sum = 1+2+3+4... 10�ױ����� �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�.
1-3 sum = 2+4+6+8... (20) 10�� ������ �հ� ���ϱ� ���α׷��� �ۼ��Ѵ�.
1-4 sum = 1+3+5+7... (?) �� 10�� ������ �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�.
1-5 sum = 1+2+4+7+11... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
1-6 sum = 2+3+5+8+12... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
1-9 sum = 1+1+2+3+4+8+13... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�Ǻ���ġ ����) 
*/

// 1-10 sum =  (1 * 77) + (2 * 76) + (3 * 75) ... (77*1)
#include <stdio.h>
int main(void)
{
	//p = a + b
	int cnt;
	int a = 1, b = 77, p, sum = a * b;

	printf("---------------�ʱⰪ------------------- \n");
	printf("a = %d . b = %d . sum = %d \n", a, b, sum);
	printf("------------------------------ \n");

	for (cnt = 1; cnt < 78; cnt++) {
		p = a * b;
		sum = sum + p;
		printf("cnt = %d. a = %d. b = %d. p = %d. sum = %d. \n", cnt, a, b, p, sum);
		b = b - 1; // ���� ��Ģ�� ã�Ƽ� �ش� ���� �������.
		a = a + 1; // ���� ���� b���� �Ǿ���Ѵ�.

	}
	printf("---------------------------------------- \n");
	printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
	system("pause");
	return 0;
}




//1-9 sum = 1 + 1 + 2 + 3 + 5 + 8 + 13... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�Ǻ���ġ ����)
/* #include <stdio.h>
int main(void)
{
	//p = a + b
	int cnt;
	int a = 1, b = 1, p, sum = a + b;

	printf("---------------�ʱⰪ------------------- \n");
	printf("a = %d . b = %d . sum = %d \n", a, b, sum);
	printf("------------------------------ \n");

	for (cnt = 3; cnt < 11; cnt++) {
		p = a + b;
		sum = sum + p;
		printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
		a = b; // 
		b = p; // ���� ���� b���� �Ǿ���Ѵ�.

	}
	printf("---------------------------------------- \n");
	printf("cnt = %d. p = %d. sum = %d. \n", cnt, p, sum);
	system("pause");
	return 0;
} */

//1-8-1 sum = 1! + 2! + 3! + 4! + ... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
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
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, i, f, sum);// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
 */

//1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
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
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (��������)
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
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-7-1 sum = 1+3+6+10+15+21... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�������� ����)
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
		printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for������ cnt�� ���� �������� ������ ������ ��������.
		system("pause");
		return 0;
} */

//1-6 sum = 2+3+5+8+12... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�������� ����)
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
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-5 sum = 1+2+4+7+11... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�������� ����)
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
	printf("cnt = %d. j = %d. i = %d. sum = %d. \n", cnt, j, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-4 sum = 1+3+5+7... (?) �� 10�� ������ �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�. (Ȧ�� ����)
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int i = -1, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		i = i + 2;
		sum = sum + i; //�ʱⰪ�� ������ ���� �Ű�Ἥ ���α׷����϶�.
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-3 sum = 2+4+6+... (20) 10�� ������ �հ� ���ϱ� ���α׷��� �ۼ��Ѵ�. (¦�� ����)
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
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-2 sum = 1+2+3+4... 10�ױ����� �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�.
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
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-1 sum = 7+7+7+7+... 7  : 10�� ������ �հ�
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		sum = sum + 7; // �������
		printf("cnt = %d. sum = %d. \n", cnt, sum);
	}
	printf("------------------------------ \n");
	printf("cnt = %d. sum = %d. \n", cnt, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

/* #include<stdio.h>
int main(void)
{
	int appleBox = 30;
	int grapeBox = 20;
	int total;

	total = appleBox + grapeBox; // �� ������ ���� ���ؼ� total �� ����
	printf("�� %d �ڽ��� �ֽ��ϴ�\n", total);

	system("pause");
	return 0;
} */

/* #include<stdio.h>
int main(void)
{
   int a = 0;  // ���� a (�޸� ���� a)
   int sum;  // ���� b (�޸� ���� b)

   a = a + 5;

   sum = 2;
   sum = sum + 5;



   printf("a���� ���� = %d\n", a);  // ����a�� ����� ���� ��� 
   printf("sum���� ���� = %d\n", sum);  // ����b�� ����� ���� ���

   system("pause");
   return 0;
} */