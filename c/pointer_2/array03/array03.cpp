#include<stdio.h>
int main(void)
{
	int i[3] = {0, 1, 2};
	int j, *p;

	p = &i[0];

	for(j = 0; j < 3; j++)
	{
		printf("&i[%d] = %p ,",j, &i[j]);
		printf("(p+%d) = %p \n",j,p+j);
	}
	return 0;
}