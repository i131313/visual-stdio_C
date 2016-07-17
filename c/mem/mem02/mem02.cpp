#include<stdio.h>
#include<malloc.h>
int main(void)
{
	char *str;
	int length;

	printf("好きな映画のタイトルの文字数は？ ＞ ");
	scanf("%d",&length);

	str = (char *)malloc(sizeof(char) * length);

	printf("好きな映画のタイトルは？ ＞ ");
	scanf("%s",str);

	printf("入力文字列は%sです\n",str);

	return 0;

}