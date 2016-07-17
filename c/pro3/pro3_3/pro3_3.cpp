#include<stdio.h>

int is_leap_year(int);

int main(void)
{
	int seireki;

	printf("閏年の判定を行います．\n");
	printf("判定したい年を西暦で入力してください＞");
	scanf("%d",&seireki);

	if(is_leap_year(seireki) == 1)
	{
	    printf("西暦%d年は閏年です．\n",seireki);
	}

	else
	{
		printf("西暦%d年は閏年ではありません．\n",seireki);
	}

	return 0;
}

int is_leap_year(int seireki)
{
	if((seireki % 4 == 0) && ((seireki % 100 != 0) || (seireki % 400 ==0)))
	{
        return 1;
	}
	
	else
	{
		return 0;
	}
}