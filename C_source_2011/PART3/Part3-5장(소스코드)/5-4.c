/* 5-4.c 
#include <stdio.h>
	
# define MAX 100			// ������ ��ũ�� ���
# define PI 3.14				// �Ǽ��� ��ũ�� ���
	
int main(void)
{
		int a=3;
		printf("���� �� : %d, %lf \n", MAX, PI);
		
		#undef MAX				// ��ũ�� ����
		#undef PI				// ��ũ�� ����
		
		#define MAX 1000		// ��ũ�� ��� ������
		#define PI 3.141592		// ��ũ�� ��� ������
		printf("���� �� : %d, %lf \n", MAX, PI);
		
		return 0;
}*/
