#include<stdio.h>

int get_area(int);

int main(void)
{
	int hankei;

	printf("円の面積を求めます．\n");
	printf("円の半径を入力してください＞");
	scanf("%d",&hankei);

	printf("半径%dとする円の面積は，%d です．\n",hankei,get_area(hankei));

	return 0;
}

int get_area(int hankei)
{
	int menseki;

	menseki = hankei * hankei* 3.14;

	return menseki;
}

