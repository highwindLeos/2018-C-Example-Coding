/* 9-13.c
#include <stdio.h> 
void self_service(int n);					// �Լ��� ����(00 ����)
	
int main(void)
{
		int a=1;
		self_service(a);						// �Լ��� ȣ��
		return 0;
}
	
void self_service(int n)					// �Լ��� ����
{
	if(n>5)			// �Լ��� ���� �ݺ� ������ �ذ��ϴ� ����
			return;		// ���� ��ȯ���� �ʰ� �׳� �Լ��� �����Ѵ�.
		
		printf("���� ���� %dȸ \n",n);
		self_service(n+1);	// �Ű� ���� n�� �ϳ� �����ؼ� self_service( ) �Լ��� ȣ��
} */
