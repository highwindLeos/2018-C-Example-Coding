/* 4-3.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		
		// * �����ڸ� ����
		printf("%d %d %d \n", *(array+0), *&array[0], array[0]);	// �迭�� 0�� ��ҿ� ����� ��
		printf("%d %d %d \n", *(array+1), *&array[1], array[1]);	// �迭�� 1�� ��ҿ� ����� ��
		printf("%d %d %d \n", *(array+2), *&array[2], array[2]);	// �迭�� 1�� ��ҿ� ����� ��
		// ���: *(array + i) == *&array[i] == array[i]�� ���� ��Ÿ���� ���� ǥ��
		
		return 0;
}
*/
