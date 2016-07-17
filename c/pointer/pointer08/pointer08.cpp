#include<stdio.h>
void swap(int *, int *);

int main(void)
{
	int a = 10, b = 20;

	swap(&b, &a);

	printf(" a = %d\n b = %d\n",a, b);

	return 0;
}

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	
}