#include<stdio.h>
int main(void)
{
	char str[][8] = {"Good","Morning","2I"};

	int i;

	for(i = 0; i < 3; i++)
		printf("str[%d] = %s \n",i,str[i]);
}