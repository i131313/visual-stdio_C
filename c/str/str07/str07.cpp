#include<stdio.h>
int str_length(char str[])
{
	int length = 0;

	while(str[length] != '\0')
		length++;

	return length;
}

int main(void)
{
	char str[128];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s",str);

	printf("•¶š—ñ%s‚Ì’·‚³‚Í%d‚Å‚·D\n", str, str_length(str));
}