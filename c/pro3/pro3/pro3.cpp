#include<stdio.h>

int get_area(int);

int main(void)
{
	int hankei;

	printf("�~�̖ʐς����߂܂��D\n");
	printf("�~�̔��a����͂��Ă���������");
	scanf("%d",&hankei);

	printf("���a%d�Ƃ���~�̖ʐς́C%d �ł��D\n",hankei,get_area(hankei));

	return 0;
}

int get_area(int hankei)
{
	int menseki;

	menseki = hankei * hankei* 3.14;

	return menseki;
}

