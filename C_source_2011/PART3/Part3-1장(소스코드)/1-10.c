/* 1-10.c 
#include <stdio.h>
	
struct student
{
		char no[10];			// �й�
		char name[20];			// �̸�
		double math;			// ���� ����
		double english;			// ���� ����
		double total;				// ����
};
	
int main(void)
{
		struct student stu1={"20101323", "Park", 80, 80, 0};	// �л� 1�� ����
		struct student stu2={"20101324", "Kim", 95, 85, 0};	// �л� 2�� ����
		struct student stu3={"20101325", "Lee", 100, 90, 0};	// �л� 3�� ����
		
		stu1.total=stu1.math+stu1.english;
		printf("�й� : %s, �̸� : %s \n", stu1.no, stu1.name);	// . �����ڷ� ��� ����(�迭) ����
		printf("���� : %lf \n", stu1.total);
		
		printf("\n");
		stu2.total=stu2.math+stu2.english;
		printf("�й� : %s, �̸� : %s \n", stu2.no, stu2.name);	// . �����ڷ� ��� ����(�迭) ����
		printf("���� : %lf \n", stu2.total);
		
		printf("\n");
		stu3.total=stu3.math+stu3.english;
		printf("�й� : %s, �̸� : %s \n", stu3.no, stu3.name);	 // . �����ڷ� ��� ����(�迭) ����
		printf("���� : %lf \n", stu3.total);
			
		return 0;
}*/