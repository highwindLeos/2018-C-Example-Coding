/* 4-5.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		int* p=NULL;
		p=array;		// p=&array[0];  ������ ������ �迭�� ���� �ּҸ� ����
		
		// * �����ڸ� ����
		printf("%d %d %d \n", *p, *(p+0), *&p[0]);	// �迭�� 0�� ��ҿ� ����� ��
		printf("%d %d \n", *(p+1), *&p[1]);				// �迭�� 1�� ��ҿ� ����� ��
		printf("%d %d \n", *(p+2), *&p[2]);				// �迭�� 2�� ��ҿ� ����� ��
		
		return 0;
}*/
