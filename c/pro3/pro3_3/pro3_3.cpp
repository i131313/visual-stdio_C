#include<stdio.h>

int is_leap_year(int);

int main(void)
{
	int seireki;

	printf("�[�N�̔�����s���܂��D\n");
	printf("���肵�����N�𐼗�œ��͂��Ă���������");
	scanf("%d",&seireki);

	if(is_leap_year(seireki) == 1)
	{
	    printf("����%d�N�͉[�N�ł��D\n",seireki);
	}

	else
	{
		printf("����%d�N�͉[�N�ł͂���܂���D\n",seireki);
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