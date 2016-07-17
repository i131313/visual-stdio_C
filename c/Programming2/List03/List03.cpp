#include<stdio.h>
#include<stdlib.h>

void show_title(void);
char make_character(void);

int main(void)
{
	char result = 'n';

	show_title();
	while(result != 'Y'){
		result = make_character();
	    printf("キャラの名前を確定してよいか。答えは%cでした。\n",result);
	}
}

void show_title(void)
{
	system("cls");
	printf("見習い魔導師イーノ最初の受難\n\n");
}

char make_character(void)
{
	char name[10];
	char confirmation;

	printf("キャラクターの名前を入力してください：");
	scanf("%s",name);
	printf("キャラクターの名前は%sでよいですか？（Y/N）",name);
	scanf("%*c%c",&confirmation);
	return confirmation;
	if(confirmation == 'y') 
		printf("了解しました。名前を確定します。\n");
	
}