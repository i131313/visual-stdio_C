/*#include<stdio.h>
int main(void)
{
	int i;
	int j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=2*i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	int i=1;
	int j=1;

	while(i<=4)
	{
		j=1;
		while(j<=2*i)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/

#include<stdio.h>
int main(void)
{
	int i;
	int j;

	for(i=1;i<=4;i++)
	{
		j=1;
		while(j<=2*i)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
	}
	return 0;
}