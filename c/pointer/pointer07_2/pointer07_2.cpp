#include<stdio.h>
void func(int, int);

int main(void)
{
	int a = 2, b = 3;
	//int *pa = &a;

	func(a, b);

	printf("a = %d , b = %d \n",a, b);

	return 0;
}

void func(int x, int y)
{
	x = y = 1;
	
}