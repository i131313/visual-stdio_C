#include<stdio.h>
int main(void)
{
	char c;

	printf("文字を入力してください");
	scanf("%c",&c);
	
	if('a'<=c && c<='z'){
		printf("入力した文字の大文字は%cです。\n",c-('a'-'A'));
	}
	else{
		printf("入力した文字の大文字は%cです。\n",c);
	}
	return(0);

}