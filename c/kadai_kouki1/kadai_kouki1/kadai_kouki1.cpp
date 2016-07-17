#include<stdio.h>

void sum(int, int, int *);

int main(void)
{
	int value;

	sum(50, 100, &value);
	printf("%d\n",value);

	return 0;
}

void sum(int min, int max, int *ans)
{
	*ans = (min + max) * (max - min + 1) / 2;
}