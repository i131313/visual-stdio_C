#include<stdio.h>
int main(void)
{
	char c[3] = {'a', 'b', 'c'};
	int j;

	for(j = 0; j < 3; j++)
		printf("&c[%d]: %p \n", j, &c[j]);
}