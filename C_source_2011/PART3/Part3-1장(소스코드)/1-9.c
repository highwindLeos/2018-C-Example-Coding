/* 1-9.c 
#include <stdio.h>
	
typedef struct score				// ����ü���� typedef�� ����ϴ� ��� 1
{
		double math;
		double english;
		double average;
} SCORE;
	
struct student
{
		int no;
		SCORE s;					// struct socre s;
};
	
typedef struct student STUDENT;	// ����ü���� typedef�� ����ϴ� ��� 2

int main(void)
{
			STUDENT stu={20101323, {90, 80, 0}};
			
			stu.s. average=(stu.s.math+stu.s.english)/2;
			printf("�й� : %d \n", stu.no);
			printf("��� ���� : %lf \n", stu.s.average);
			
			return 0;
}
*/