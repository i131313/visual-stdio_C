#include<stdio.h>
int main(void)
{
	int a;
	int *p;

	p  = (int*)100;
	*p = 0;

	printf("a�̒l �F%d\n", a);
	printf("*p�̒l�F%d\n", *p);

	return 0;
}