/* 9-9.c 
#include <stdio.h>
void count(void);			// �Լ��� ����(00 ����)
	
int main(void)
{
		count( );			// �Լ��� ȣ��
		count( );			// �Լ��� ȣ��
		count( );			// �Լ��� ȣ��

		return 0;
}
	
void count(void)			// �Լ��� ����
{
		static int x=0;		// ���� ����, �ʱ�ȭ�� �� �� ����
		int y=0;				// ���� ����, �ʱ�ȭ�� �Ź� ����
	
		x=x+1;
		y=y+1;
	
		printf("x �� : %d, y �� : %d\n", x, y);
}
*/