/* 3-12.c 
#include<stdio.h>
struct score
{
	char name[20];
	double kor, eng, total;
};
typedef struct score STUDENT;

int main(void)
{
	STUDENT s, ss;	
	FILE* stream;
	
	printf("1. �̸� �Է�: ");
	fscanf(stdin,"%s",s.name);

	printf("2. ���� ����, ���� ���� �Է�: ");
	fscanf(stdin,"%lf %lf",&s.kor, &s.eng);
	s.total=s.kor+s.eng;

	stream = fopen("student.dat","wb");     // ���̳ʸ� ���, ���� ���
	fwrite(&s, sizeof(s),1,stream);         // ����(student.dat)�� ���
	fclose(stream);

	stream = fopen("student.dat","rb");     // ���̳ʸ� ���, �б� ���
	fread(&ss,sizeof(s),1,stream);           // ����(stduent.dat)�� ���� �Է�
    fprintf(stdout,"%s %.2lf %.2lf %.2lf \n",ss.name, ss.kor, ss.eng, ss.total);
	fclose(stream);

    return 0;
}*/
