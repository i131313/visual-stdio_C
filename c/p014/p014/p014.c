#include <stdio.h>
int main(void)
{
	int a,b,c;
	double x;

	a=19;
	printf("%d\n",a);
	printf("%4d\n",a);
	printf("%7d\n",a);

	a=56;
	b=619;
	c=1234;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

	printf("%4d\n",a);
	printf("%4d\n",b);
	printf("%4d\n",c);

	x=1.5;
	printf("%f\n",x);
	printf("%6.2f\n",x);
	printf("%e\n",x);
	printf("%E\n",x);
	printf("%g\n",x);


	return(0);
}