/* 3-15.c 
#include<stdio.h>
int main(void)
{
	FILE* stream = fopen("ftell.txt", "rb");
	fseek(stream, 0, SEEK_END);
	printf("ftell.txt ������ ũ�� : %d ����Ʈ\n", ftell(stream));
	fclose(stream);

	return 0;
}
*/