/* 5-4.c
#include <stdio.h>
	
void func(int(*p)[4], int num1, int num2);			// �Լ��� ����, �迭 ������ ����
	
int main(void)
{
		int array[2][4]={10,20,30,40,50,60,70,80};
		func(array, sizeof(array)/16, sizeof(array)/8);	// �Լ��� ȣ��
		return 0;
}
	
void func(int(*p)[4], int num1, int num2)			// �Լ��� ����
{
		int i, j;
		for(i=0; i<num1; i++)
		{
			for(j=0; j<num2; j++)
			{
				printf("%d ", p[i][j]);
			}
			printf("\n");
		}
} */
