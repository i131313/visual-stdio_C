#include<stdio.h>
int main(void)
{
	int a = 100;
	int *p;

	p = &a;
	*p = 10;

	printf("a�̒l �F%d\n",a);
	printf("*p�̒l�F%d\n",*p);

	return 0;
}