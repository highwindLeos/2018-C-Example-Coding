/* 3-2.c 
#include<stdio.h>
#include<conio.h>

int main(void)
{
	char ch=0;	
	printf("Ű�Է�");
	
	while(ch != 'q')  
	{
		if(kbhit())
		{
			ch = getche();   // ch = getch();
			putch(ch);
		}	
	}

	return 0;
}
*/ 