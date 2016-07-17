#include<stdio.h>
int main(void)
{
	char name[40];

	printf("名前は？？　＞　",name);

	scanf("%s",name);

	printf("こんにちは，%sさん！\n",name);
}