/* 3-13.c 
#include <stdio.h>
int main(void)
{
		FILE* stream;
		stream=fopen("seek.txt", "w");			// ���� ���
		fputs("ABCDEFGHIJ", stream);
		fclose(stream);
		
		stream=fopen("seek.txt", "r");				// �б� ���
		
		fseek(stream, 0, SEEK_SET);
		fprintf(stdout, "%c \n", fgetc(stream));	// A ���
		
		fseek(stream, 2, SEEK_SET);
		fprintf(stdout, "%c \n", fgetc(stream));	// C ���
		
		fseek(stream, -1, SEEK_END);
		fprintf(stdout, "%c \n", fgetc(stream));	// J ���
		
		fseek(stream, -2, SEEK_CUR);
		fprintf(stdout, "%c \n", fgetc(stream));	// I ���
		fclose(stream);
		
		return 0;
}*/
