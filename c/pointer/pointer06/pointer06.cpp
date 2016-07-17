#include<stdio.h>
int main(void)
{
	int a;
	int *p;

	p  = (int*)100;
	*p = 0;

	printf("aの値 ：%d\n", a);
	printf("*pの値：%d\n", *p);

	return 0;
}