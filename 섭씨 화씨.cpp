#include <stdio.h>
#include <stdlib.h>

double Cel(double num1);
double Fah(double num2);

double Cel(double num1)
{
	return 1.8*num1 + 32;
}
double Fah(double num2)
{
	return (num2 - 32) / 1.8;
}

int main(void)
{
    int num1;
    double n1;

    printf("1.������ ȭ���� 2.ȭ���� ������\n");
    printf("����>>");
    scanf_s("%d",&num1); 

	if (num1 == 1)
	{
		printf("�����Է�:");
		scanf("%lf", &n1);
		printf("ȭ��:%lf", Cel(n1));
	}
	else if (num1 == 2)
    {    
         printf("ȭ���Է�:");
         scanf("%lf",&n1);
         printf("����:%lf",Fah(n1));
    }
    else
	{ 
        printf("1�� 2 �߿� �� �޴��� �Է����ּ���. \n");
	}
        
    system("pause");
    return 0;
}
