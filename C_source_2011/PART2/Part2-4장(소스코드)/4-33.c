/*4-33.c 
// �� ������ ������ �ٸ� �޸� ������ �ּҸ� �������� ���ϰ� �Ѵ�.
#include <stdio.h>
int main(void)
{
		char a='A';
		char b='B';
	
:		char* const p=&a;	// p=&a ���ȭ
		
		*p='C';
		printf("%c \n", *p);
		printf("%c \n", a);
	
		p=&b;				// ����
		
		return 0;
}
*/