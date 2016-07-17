#include<stdio.h>
#include<malloc.h>
int main(void)
{
	char str[10];

	printf("好きな映画のタイトルは？ ＞ ");

	scanf("%s",str);

	printf("入力文字列は%sです\n",str);

	return 0;

}