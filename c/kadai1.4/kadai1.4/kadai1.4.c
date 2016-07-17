/*#include<stdio.h>
int main(void)
{
	int i;

	for(i=-3;i<=12;i+=3)
	{
		printf("%d  ",i);
	}
	printf("\n");
    return 0;
}

#include<stdio.h>
int main(void)
{
	int i;
	i=-3;
	
	while(i<=12)
	{
		printf("%d  ",i);
		i+=3;
	}
	printf("\n");
	return 0;
}*/

#include<stdio.h>
int main(void)
{
	int i;
	i=-3;

	do
	{
		printf("%d  ",i);
		i+=3;
	}while(i<=12);
    printf("\n");
	return 0;
}
