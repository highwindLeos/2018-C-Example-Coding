/* 7-3.c
#include <stdio.h>
int main(void)
{
    int i=2;	// 2�ܺ���
    int j=1;	// 2*1���� 1�� �ǹ̷� �ʱ�ȭ
    int result=0;	// �������� ��� ���� ����
		
    while(i<10)	// 9�ܱ���
    {
      while(j<10)
      {
         result=i*j;
         printf("%d * %d = %d \n", i, j, result);
         j++;
      }
      i++;		// ���� ����
      j=1;		// ���� ����
      printf("--------------\n");
   }
   return 0;
}
*/