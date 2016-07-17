#include<stdio.h>

int is_leap_year(int);
int get_month_last_day(int, int);

int main(void)
{
	int seireki,tuki;

	printf("���̍ŏI�������߂܂��D\n");
	printf("���肵�����N�𐼗�œ��͂��Ă���������");
	scanf("%d",&seireki);
	printf("���肵����������͂��Ă���������");
	scanf("%d",&tuki);

	printf("����%d�N%d���̍ŏI����%d���ł��D\n",seireki,tuki,get_month_last_day(seireki,tuki));

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

int get_month_last_day(int seireki, int tuki)
{
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int a;

	a = is_leap_year(seireki);

	if((a == 1) && (tuki == 2))
	{
		return month[1]+1;
	}

	else
	{
	    return month[tuki-1];
	}
}