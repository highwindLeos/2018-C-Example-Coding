/* 7-11.c 
#include <stdio.h>
int main(void)
{
		int num, j=9, result=0;
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &num);
		
		for(  ; num>0; num--)
		{
			for(j=9; j>0; j--)
			{
				result=num*j;
				printf("%d * %d = %d\n", num, j, result);
			}
			printf("--------\n");
		}
			
		return 0;
}
*/