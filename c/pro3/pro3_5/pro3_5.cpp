#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int a, b, i;

	srand(time(NULL));
	b = rand()%10+1;
	//printf("%d\n",b);
	
	for( i=1; i<=5; i++)
	{
		printf("1〜10の整数を入力してください．＞ ");
		scanf("%d",&a);
		if( a == b )
		{
			printf("%d回目で当たりです！\n",i);
			break;
		}
		if( i == 5)
		{
			printf("正解は%dです．\n",b);
		}
		
	}
	return 0;
}