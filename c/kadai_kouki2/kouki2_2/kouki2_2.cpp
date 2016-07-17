#include<stdio.h>

int str_char(char str[], char c);

int main(void)
{
	char str[128];
	int z;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s",str);

	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Í%s‚Å‚·D\n", str);

	z = str_char(str,  'c');

	if(z != -1)  
		printf("c ‚Ì“Y‚¦š‚Í%d‚Å‚·D \n", z);
	else
		printf("%d \n", z);

	return 0;
}

int str_char(char str[], char c)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c) return i;
		i++;
	}

	return -1;
}