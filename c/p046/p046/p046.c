#include<stdio.h>
void func(void);
int i=0;

void main(void)
{
	i=1;
	func();
	printf("main関数内のiの値…%d\n",i);
}

void func(void)
{
	int i=2;
	printf("func関数内のiの値…%d\n",i);
}