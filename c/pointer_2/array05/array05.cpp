#include<stdio.h>
int main(void)
{
	int i[3] = {0, 1, 2};
	int j, *p;

	p = i;

	for(j = 0; j < 3; j++)
	{
		printf("i[%d]    = %d\n",j, i[j]);
		printf("*(p+%d)  = %d\n",j, *(p+j));
		printf("p[%d]    = %d\n\n",j, p[j]);
	}
	return 0;
}