#include<stdio.h>
int add(int,int );
int main(void)
{
	int out;
	int a=10;
	int b=20;

	out=add(a,b);

	printf("‰ÁZŒ‹‰Ê@%d\n",out);

	return 0;
}
int add(int x, int y)
{
	int z;

	z=x+y;
	return z;
}
