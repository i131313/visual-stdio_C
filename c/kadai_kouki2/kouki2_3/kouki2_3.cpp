#include<stdio.h>

int str_chnum(char str[], char c);

int main(void)
{
	char str[128];
	int z;

	printf("文字列を入力してください：");
	scanf("%s",str);

	printf("入力された文字列は%sです．\n", str);

	z = str_chnum(str,  'c');

	if(z != 0)  
		printf("文字列に含まれる c の個数は%dです． \n", z);
	else
		printf("文字列に c は含まれていません \n", z);

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