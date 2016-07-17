#include<stdio.h>

int main(void)
{
	int  a=1, b=2, c=3;

	a = b = c = 0;
	printf("a = %d, b = %d, c = %d", a, b, c);

	a = 0;
	b = 0;

	printf("a++    : %d", a++);
	printf("++b    : %d", ++b);
	printf("b != 1 : %d", b != 1);
	printf("c == 0 : %d", c == 0);

	return 0;
}
