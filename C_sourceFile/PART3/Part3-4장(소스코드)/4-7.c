/* 4-7.c 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
		int i=0;
		
		int* p=(int*) malloc(sizeof(int)*2);		// 8����Ʈ ���� �޸� �Ҵ�
		p[0]=10;
		p[1]=20;
			
		p=(int*) realloc(p, sizeof(int)*1);		// 4����Ʈ�� ���Ҵ�(�������� 4����Ʈ��ŭ ��ҵ�)
			p[0]=30;
		
		for(i=0; i<2; i++)
			printf("p[%d] : %d \n", i, p[i]);
				
		free(p);
			p=NULL;
		
		return 0;
	}*/


