/* 3-8.c
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip=NULL;			// 1���� ������ ���� ����
		int** ipp=NULL;		// 2���� ������ ���� ����
		
		ip=&num1;
		ipp=&ip;
		
		printf("%d %x %x \n", num1, ip, ipp);			// �� ������ ����� ������ ���
		printf("%x %x %x \n", &num1, &ip, &ipp);		// �� ������ �ּ� ���
		printf("%d %x %x \n", *&num1, *&ip, *&ipp);	// *&�� ���� ���
		
		printf("%d %d %d \n", num1, *ip, **ipp);		// 10 ���
		printf("%x %x %x \n", &num1, ip, *ipp);		// ���� num1�� �ּ�(&num1) ���
		
		return 0;
}
 */