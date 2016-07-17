#include<stdio.h>
double acc(double);

static double sum=5.6;
int main(void)
{
	acc(1.2);
	acc(2.3);
	printf("%f\n",acc(-0.2));

	return 0;
}
double acc(double x)
{
	static double sum=0.0;
	sum=sum+x;
	return sum;
}