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

//1 - 9 sum = 1 + 1 + 2 + 3 + 5 + 8 + 13... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (�Ǻ���ġ ����)
/* #include <stdio.h>
int main(void)
{

	system("pause");
	return 0;
} */

//1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
/* #include <stdio.h>
int main(void)
{
	int i, j;
	int k = 1;
	int total = 0;

	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			k = k * j;
		}
		total = total + k;
		printf("i = %d. j = %d. k = %d. \n", i, j, k);
		k = 1;
	}
	printf("--------------------------- \n");
	printf("10�� ���丮���� %d \n", total);
	system("pause");
	return 0;
} */

//1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�. (���丮��)
/* #include <stdio.h>
int main(void)
{
	int i, j, k = 0;
	int total = 0;

	for (i = 1; i <= 10; i++){
		for (j = 1; j <= i; j++){
			k = k + j;
		}
		total = total + k;
		printf("i = %d. j = %d. k = %d. \n", i, j, k);
		k = 0;
	}
	printf("--------------------------- \n");
	printf("10�ױ����� ��� %d \n", total);
	system("pause");
	return 0;
} */

//1-6 sum = 2+3+5+8+12... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
/* #include <stdio.h>
int main(void)
{
	int cnt, j = 1+1; //j �� �ʱⰪ�� 2
	int i = 0, sum = 0;

	for (cnt = 0; cnt < 10; cnt++)
	{
		j = j + cnt;
		sum = sum + j;
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, j, sum);

	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, j, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-5 sum = 1+2+4+7+11... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
/* #include <stdio.h>
int main(void)
{
	int cnt, j = 1;  //j �� �ʱⰪ�� 1
	int i = 0, sum = 0;

	for (cnt = 0; cnt < 10; cnt++)
	{
		j = j + cnt;
		sum = sum + j;
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, j, sum);

	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, j, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-4 sum = 1+3+5+7... (?) �� 10�� ������ �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�.
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int i = 1, sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		sum = sum + i;
		printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);
		i = i + 2;
	}
	printf("------------------------------ \n");
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
	system("pause");
	return 0;
} */

//1-3 sum = 2+4+6+... (20) 10�� ������ �հ� ���ϱ� ���α׷��� �ۼ��Ѵ�.
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

//1-1 sum = 7 +7+7+7+... 7  : 10�� ������ �հ�
/* #include <stdio.h>
int main(void)
{
	int cnt;
	int sum = 0;

	for (cnt = 1; cnt < 11; cnt++)
	{
		sum = sum + 7;
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