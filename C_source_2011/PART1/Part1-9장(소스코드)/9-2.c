/* 9-2.c 
#include <stdio.h>
int max(int a, int b)					// �Լ��� ����(11 ����)
{	
		if(a > b)
			return a;
		else
			return b;
}
	
int main(void)
{
		int i, j;
		int k;
		
		printf("���� �� ���� �Է��ϼ��� : ");
		scanf("%d %d", &i, &j);
		
		k = max(i, j);							//�Լ��� ȣ��
		printf("%d�� %d�� ū ���� %d�Դϴ�. \n", i, j, k);
		
		return 0;
} */
