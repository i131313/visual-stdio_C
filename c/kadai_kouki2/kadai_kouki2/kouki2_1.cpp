#include<stdio.h>
int main(void)
{
	char str[] = "ABC\0DEF";
	//char str[] = "ABC";

	printf("文字列strは%sです．\n",str);

	return 0;
}