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

    printf("1.¼·¾¾¸¦ È­¾¾·Î 2.È­¾¾¸¦ ¼·¾¾·Î\n");
    printf("¼±ÅÃ>>");
    scanf_s("%d",&num1); 

	if (num1 == 1)
	{
		printf("¼·¾¾ÀÔ·Â:");
		scanf("%lf", &n1);
		printf("È­¾¾:%lf", Cel(n1));
	}
	else if (num1 == 2)
    {    
         printf("È­¾¾ÀÔ·Â:");
         scanf("%lf",&n1);
         printf("¼·¾¾:%lf",Fah(n1));
    }
    else
	{ 
        printf("1°ú 2 Áß¿¡ ÇÑ ¸Þ´º¸¸ ÀÔ·ÂÇØÁÖ¼¼¿ä. \n");
	}
        
    system("pause");
    return 0;
}
