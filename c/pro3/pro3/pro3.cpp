#include<stdio.h>

int get_area(int);

int main(void)
{
	int hankei;

	printf("‰~‚Ì–ÊÏ‚ğ‹‚ß‚Ü‚·D\n");
	printf("‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%d",&hankei);

	printf("”¼Œa%d‚Æ‚·‚é‰~‚Ì–ÊÏ‚ÍC%d ‚Å‚·D\n",hankei,get_area(hankei));

	return 0;
}

int get_area(int hankei)
{
	int menseki;

	menseki = hankei * hankei* 3.14;

	return menseki;
}

