/* 3-7.c 
#include<stdio.h>
int main(void)
{
	FILE* stream;
	char name[20];
	int  kor, eng, total;

    printf("1. �̸� �Է�: ");
	fscanf(stdin,"%s",name);							// Ű����κ��� �����͸� �Է�
	
	printf("2. ���� ����, ���� ���� �Է�: ");
	fscanf(stdin,"%d %d",&kor, &eng);              // Ű����κ��� �����͸� �Է�
	total = kor + eng;
	                      
	stream = fopen("data4.txt","w");                 
	fprintf(stream,"%s %d %d %d \n", name, kor, eng, total);   // data4.txt�� ���
	//fprintf(stdout,"%s %d %d %d \n", name, kor, eng, total); // ����Ϳ� ���
	fclose(stream);                                          

	return 0;
}
*/