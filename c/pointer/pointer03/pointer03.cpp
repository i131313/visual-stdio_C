#include<stdio.h>
int main(void)
{
	int a = 10;
	int *p;

	p = &a;

	printf("aのアドレス：%p\n",&a);
	printf("pの値      ：%p\n",p);

	return 0;
}