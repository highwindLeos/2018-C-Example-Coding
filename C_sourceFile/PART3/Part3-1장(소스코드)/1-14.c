/* 1-14.c 
#include <stdio.h>
#include <string.h>
	
struct student
{
		char no[10];			// ��� ������ �迭 ����
		char name[20];			// ��� ������ �迭 ����
};
	
int main(void)
{
		int i=0;
		struct student stu;
		
		strcpy(stu.no, "20101323");		// stu.no="20101323";
		strcpy(stu.name, "Park");			// stu.name="Park";
		printf("�й� : %s, �̸� : %s \n", stu.no, stu.name);
		
		return 0;
}
*/
