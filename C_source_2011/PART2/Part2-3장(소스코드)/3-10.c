/* 3-10.c 
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip1=NULL;			// 1���� ������ ���� ����
		int** ip2=NULL;			// 2���� ������ ���� ����
		int*** ip3=NULL;		// 3���� ������ ���� ����
		
		ip1=&num1;
		ip2=&ip1;
		ip3=&ip2;
		
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// ��� 10 ���
		
		*ip1=20;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// ��� 20 ���
		
		**ip2=30;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// ��� 30 ���
		
		***ip3=40;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// ��� 40 ���
		
		return 0;
}
*/