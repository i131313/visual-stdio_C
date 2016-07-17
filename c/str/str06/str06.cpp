#include<stdio.h>
int main(void)
{
	char str[3][128];
    int i;

	for(i = 0; i < 3; i++)
	{
		printf("str[%d] > ", i);
		scanf("%s",str[i]);
	}

	for(i = 0; i < 3; i++)
		printf("str[%d] = %s \n", i, str[i]);

	return 0;
}