#include<stdio.h>

int str_chnum(char str[], char c);

int main(void)
{
	char str[128];
	int z;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s",str);

	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Í%s‚Å‚·D\n", str);

	z = str_chnum(str,  'c');

	if(z != 0)  
		printf("•¶š—ñ‚ÉŠÜ‚Ü‚ê‚é c ‚ÌŒÂ”‚Í%d‚Å‚·D \n", z);
	else
		printf("•¶š—ñ‚É c ‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ \n", z);

	return 0;
}

int str_chnum(char str[], char c)
{
	int i = 0;
	int count_c = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c) count_c++;
		i++;
	}

	return count_c;
}