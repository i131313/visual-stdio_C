#include<stdio.h>
int main(void)
{
	char c;

	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%c",&c);
	
	if('a'<=c && c<='z'){
		printf("“ü—Í‚µ‚½•¶Žš‚Ì‘å•¶Žš‚Í%c‚Å‚·B\n",c-('a'-'A'));
	}
	else{
		printf("“ü—Í‚µ‚½•¶Žš‚Ì‘å•¶Žš‚Í%c‚Å‚·B\n",c);
	}
	return(0);

}