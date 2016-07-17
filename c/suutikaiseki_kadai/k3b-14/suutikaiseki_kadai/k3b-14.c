#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c, sqr;

	a = 10000.0;
	b = -100005.0;
	c = 5000.0;
	sqr = sqrt(b * b - 4 * a * c);
	printf("x1 = %26.18e\nx2 = %26.18e\n",(- b + sqr) / (2 * a), (- b - sqr) / (2 * a));

	return 0;
}