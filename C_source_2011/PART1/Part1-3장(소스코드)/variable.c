//1-1 sum = 7 +7+7+7+... 7  : 10�� ������ �հ�
//1-2 sum = 1+2+3+... 10 �� ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-3 sum = 2+4+6+... (20) 10�� ������ �հ� ���ϱ� ���α׷��� �ۼ��Ѵ�.
//1-4 sum = 1+3+5+... (?) �� 10�� ������ �հ� ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-5 sum = 1+2+4+7+11... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-6 sum = 2+3+5+8+12... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-7 sum = 1+(1+2)+(1+2+3)+(1+2+3+4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-8 sum = 1+(1*2)+(1*2*3)+(1*2*3*4)+... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.
//1-9 sum = 1+1+2+3+4+8+13... 10�� ������ �հ踦 ���ϴ� ���α׷��� �ۼ��Ѵ�.

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
	printf("cnt = %d. i = %d. sum = %d. \n", cnt, i, sum);	// for������ cnt�� ���� �������� ������ ������ ��������.
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