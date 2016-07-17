#include<stdio.h>
int main(void)
{
	int i[3] = {0, 1, 2};
	int j;

	for(j = 0; j < 3; j++)
		printf("&i[%d]: %p \n", j, &i[j]);
}