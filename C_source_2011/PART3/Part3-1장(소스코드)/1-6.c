/* 1-6.c 
#include <stdio.h>
	
struct point
{
		int x;
		int y;
};
	
int main(void)
{
		struct point p1={10, 20};
		struct point p2={0, 0};
		
		p2+p1;			// ����ü ���� ���� ���� ����, ���� �߻�
		p2-p1;				// ����ü ���� ���� ���� ����, ���� �߻�
		
		return 0;
}
*/