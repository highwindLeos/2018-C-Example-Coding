/* 2-4.c 
#include<stdio.h>
int main(void)
{
	 // 2���� �迭�� ����
	int array[2][2];   
 	int i,j;
	
	// 2���� �迭�� ������ �Է� 	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("������ �Է��ϼ���: ");
			scanf("%d",&array[i][j]);
		}
	}

	//2���� �迭�� ������ ��� 	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%3d",array[i][j]);
		}
	    printf("\n");
	}
	
	return 0;
}
*/ 