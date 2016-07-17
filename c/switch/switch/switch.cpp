#include<stdio.h>

int main(void)
{
	char c;

	printf("a`d‚Ì•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%c",&c);

	switch(c)
	{
	   case 'd':
		   printf("*");
	   case'c':
		   printf("*");
	   case'b':
		   printf("*");
	   case 97:
		   printf("*");
		   break;
	   default:
		   printf("•s³‚È•¶š‚ª“ü—Í‚³‚ê‚Ü‚µ‚½\n");
		   break;

	}
	return 0;
}