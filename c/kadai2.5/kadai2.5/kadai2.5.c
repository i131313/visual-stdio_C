#include<stdio.h>
int main(void)
{
	int a = 1;
	int b = 3;
	int c = 5;

	if(a > 0 && b > 0 && c > 0)
	{
		printf("3つの変数a,b,cの値は，共に正でした．\n");
	}
	
	return 0;
}

/*#include<stdio.h>
int main(void)
{
	int a = 1;
	int b = 3;
	int c = 5;

	if(a > 0)
	{
		if(b > 0)
		{
			if(c > 0)
			{
				printf("3つの変数a,b,cの値は，共に正でした．\n");
			}
		}
	}

	return 0 ;
}*/