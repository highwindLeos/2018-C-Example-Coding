/* 1-8.c 
#include <stdio.h>
	
struct score
{
		double math;
		double english;
		double total;
};
	
struct student
{
		int no;
		struct score s;		// ����ü ���� s�� ����ü student�� ��� ������ ���(��ø ����ü)
};
	
int main(void)
{
		struct student stu={20101323, {90, 80, 0}};
		// struct student stu={20101323, 90, 80, 0};
		
		stu.s.total=stu.s.math+stu.s.english;
		printf("�й� : %d \n", stu.no);
		printf("���� : %lf \n", stu.s.total);
		
		return 0;
}
*/