#include<stdio.h>

void func(int *x);

int main(void)
{
	int i[3] = {0, 1, 2};
	int j;

	func(i);

	for(j = 0; j < 3; j++)
		printf("i[%d]    = %d\n",j, i[j]);
		
	return 0;
}

void func(int *x)
{
	x[1] = 0;
}