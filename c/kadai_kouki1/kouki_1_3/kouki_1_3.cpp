#include<stdio.h>
int main(void)
{
	/*int a[10];
	int *p;
	p = &a[0];
	printf("p = %p\n",p);

	p = p++;
	printf("p = %p\n",p);*/

	int a = 0;
	int *x;

	printf("%d\n",a);
	x = &a;
	*x = 2;
	printf("%d\n",a);
}