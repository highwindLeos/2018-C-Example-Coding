/* 3-9.c 
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip1=NULL;			// 1���� ������ ���� ����
		int** ip2=NULL;		// 2���� ������ ���� ����
		int*** ip3=NULL;		// 3���� ������ ���� ����
			
		ip1=&num1;
		ip2=&ip1;
		ip3=&ip2;
			
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// ��� 10 ���
		printf("%x %x %x %x \n", &num1, ip1, *ip2, **ip3);		// ��� num1�� �ּ�(&num1) ���
		printf("%x %x %x \n", &ip1, ip2, *ip3);								// ��� ip1�� �ּ�(&ip1) ���
		printf("%x %x \n", &ip2, ip3);											// ��� ip2�� �ּ�(&ip2) ���
			
		printf("%d %d \n", sizeof(int), sizeof(int*));						// ��� 4����Ʈ ũ�� ���
		printf("%d %d\n", sizeof(int**), sizeof(int***));					// ��� 4����Ʈ ũ�� ���
			
		printf("%d %d \n", sizeof(num1), sizeof(ip1));				// ��� 4����Ʈ ũ�� ���
		printf("%d %d\n", sizeof(ip2), sizeof(ip3));						// ��� 4����Ʈ ũ�� ���
			
		return 0;
}*/

