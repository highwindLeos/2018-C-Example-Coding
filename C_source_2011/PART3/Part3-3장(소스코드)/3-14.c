/* 3-14.c 
#include <stdio.h>
int main(void)
{
		FILE* stream;
		long distance;
		
		stream=fopen("ftell.txt", "w");				// ���� ���
		fputs("ABCDEFGHIJ", stream);
		fclose(stream);
		
		stream=fopen("ftell.txt", "r");				// �б� ���
		
		fseek(stream, -8, SEEK_END);
		fprintf(stdout, "%c \n", fgetc(stream));	// C ���
		
		distance=ftell(stream);
		printf("�Ÿ� : %ld \n", distance);			// �Ÿ� 3
		fclose(stream);
			
		return 0;
} 

*/