/*  9-10.c 
#include <stdio.h>
#include <time.h>					// ���� �ӵ� ������ ���� clock( ) �Լ� ���
	
#define MAX 1000000			// �鸸�� ���ȭ

int main(void)
{
		register int i;					// int i;
		clock_t startTime, endTime, result;	// clock_t�� long��
		
		startTime=clock( );			// startTime : ���� ����
	 	for (i=0; i<=MAX; i++)		// �ݺ� ����
	 	{
	 		printf("%d\n", i);
	 	}
	 	endTime=clock( );			// endTime : ���� �Ϸ�
	 	
		result=endTime-startTime;	// ���� �ӵ�
		printf("�������� ���� �ӵ� : %lf��\n", (double)result/1000);
	 	return 0;
}
*/