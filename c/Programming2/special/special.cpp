#include<stdio.h>
int main(void)
{
	int a, b, c;

	a = b = c = 5;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	a = 0;
	a += 1;
	printf("a = %d\n", a);

	return 0;
}
