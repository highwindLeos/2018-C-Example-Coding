/* 4-8.c 
#include <stdio.h>
	
void add (int num, ...);		// ���� ���� �Լ� ����
	
int main(void)
{
			int a=10, b=20, c=30;
			
			add(1, a);				// ���� ���� �Լ� ȣ�� 1
			add(2, a, b);				// ���� ���� �Լ� ȣ�� 2
			add(3, a, b, c);			// ���� ���� �Լ� ȣ�� 3
			return 0;
}
	
void add(int num, ...)			// ���� ���� �Լ� ����
{
		int* p=NULL;
		p=&num+1;
	
		if(num==1)
			printf("%d \n", p[0]);				// 10 ���
		else if (num==2)
				printf("%d \n", p[0]+p[1]);			// 30 ���
		else
			printf("%d \n", p[0]+p[1]+p[2]);	// 60 ���
}

*/