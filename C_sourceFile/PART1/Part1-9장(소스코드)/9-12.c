/* 9-12.c 
#include <stdio.h>
void self_service(void);					// �Լ��� ����(00 ����)
	
int main(void)
{
		self_service( );						// �Լ��� ȣ��
		return 0;
}
	
void self_service(void)					// �Լ��� ����
{
		static int i=1;							// int i=1;
		
		if(i>5)										// �Լ��� ���� �ݺ� ������ �ذ��ϴ� ����
			return;									// ���� ��ȯ���� �ʰ� �׳� �Լ��� �����Ѵ�.
		
		printf("���� ���� %dȸ \n",i);
		i=i+1;				// i ���� ������Ų��.
		self_service( );
}*/
