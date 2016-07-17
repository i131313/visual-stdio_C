#include<stdio.h>
int main(void)
{
	int a;
	double x;

	printf("10 / 3 = %d\n", 10 / 3);

	printf("10 / 3.0 = %f\n", 10 / 3.0);

	a = 10 / 3;

	printf("a = %d\n", a);

	a = 10 / 3.0;
	printf("a = %d\n", a);

	x = 10 / 3;

	printf("x = %f\n", x);

	x = 10 / 3.0;
	printf("x = %f\n", x);

	return 0;
}