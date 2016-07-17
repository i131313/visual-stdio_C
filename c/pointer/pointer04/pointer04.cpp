#include<stdio.h>
int main(void)
{
	int a = 100;
	int *p;

	p = &a;
	*p = 10;

	printf("aの値 ：%d\n",a);
	printf("*pの値：%d\n",*p);

	return 0;
}