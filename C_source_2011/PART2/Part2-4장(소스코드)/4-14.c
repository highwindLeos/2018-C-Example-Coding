/* 4-14.c 
#include <stdio.h>
int main(void)
{
		int array[2][3]={10,20,30,40,50,60};
		int* p=NULL;
		
		p=array;		// p=&array[0][0];  // p=array[0]; ������ ������ �迭�� ���� �ּҸ� ����
		
		printf("------------\n");
		printf("%x %x %x \n", &p[0], &p[1], &p[2]);	// printf("%x %x %x \n", p+0, p+1, p+2);
		printf("%x %x %x \n", &p[3], &p[4], &p[5]);	// printf("%x %x %x \n", p+3, p+4, p+5);
		
		printf("------------\n");
		printf("%d %d %d \n", p[0], p[1], p[2]);	// printf("%d %d %d \n", *(p+0), *(p+1), *(p+2));
		printf("%d %d %d \n", p[3], p[4], p[5]);	// printf("%d %d %d \n", *(p+3), *(p+4), *(p+5));
		
		return 0;
}
*/