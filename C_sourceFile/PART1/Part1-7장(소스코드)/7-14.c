/* 7-14.c 
#include <stdio.h>
int main( )
{
		int i, factorial=1;
		for(i=1;  ; i++)		// ���� ���� ���� ���(���� ����) for(i=1; 1; i++)�� ���� �ǹ�
		{
			factorial=factorial * i;
	 		
			if (i>10)
				break;		// ���� �ݺ����� Ż���ϱ� ���� break ��
		}
		printf("1���� 10������ �� : %d\n", factorial);
		
		return 0;
}
*/