/* 1-19.c  
#include<stdio.h>

struct student
{
	char no[10];       // �й�
	char name[20];     // �̸�
	double total;      // ����
};

int main(void)
{
	struct student stu = {"20101323", "Park", 160};
	struct student*   p=NULL;
	struct student** pp=NULL;
		
	p = &stu;   
    pp = &p;

	printf("%s %s %lf \n",stu.no, stu.name, stu.total);
	
	printf("%s %s %lf \n",(*p).no, (*p).name, (*p).total);				// 1���� �����ͷ� ����
	printf("%s %s %lf \n",p->no, p->name, p->total);					// 1���� �����ͷ� ����
    
	printf("%s %s %lf \n",(**pp).no, (**pp).name, (**pp).total);	// 2���� �����ͷ� ����
    printf("%s %s %lf \n",(*pp)->no, (*pp)->name, (*pp)->total); // 2���� �����ͷ� ����

	return 0;
}*/
