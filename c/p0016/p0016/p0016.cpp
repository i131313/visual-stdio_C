#include<stdio.h>
int main(void)
{
	char m,n;
	m=65;
	m=0x41;
	m='A';
	printf("%c\n",m);

	m='B';
	printf("%c\n",m-'A'+'a');

	m='d';
	printf("%c\n",m-'a'+'A');

	printf("‘å•¶š‚Ì‰pš‚ğ‚P‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%c",&m);
	printf("%c‚Ì¬•¶š‚Í%c‚Å‚·\n",m,m-'A'+'a');

	fflush(stdin);
	printf("¬•¶š‚Ì‰pš‚ğ‚P‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	m=getchar();    /* scanf("%c",&m);*/
	printf("%c‚Ì‘å•¶š‚Í%c‚Å‚·\n",n,n-'a'+'A');

	return(0);
}

	

	
	