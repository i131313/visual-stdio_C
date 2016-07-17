#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void show_title(void);
char make_character(void);
void show_dungeon(void);

int main(void)
{
	char result = 'n';
	char direction;
	//int result_kbhit;
	char key;

	show_title();
	while(result != 'y' && result != 'Y'){
		result = make_character();
	    //printf("キャラの名前を確定してよいか。答えは%cでした。\n",result);
	}

	system("cls");

	show_dungeon();

	while(1)
	{
		if(kbhit())
		{

			key = getch();
			if(key == 119){
				system("cls");
				printf("+@+++\n+++++\n+++++\n");
			}
			if(key == 120){
				system("cls");
				printf("+++++\n+++++\n+@+++\n");
			}
			if(key == 97){
				system("cls");
				printf("+++++\n++@++\n+++++\n");
			}
			if(key == 100){
				system("cls");
				printf("+++++\n++@++\n+++++\n");
			}
		}
	}
}

void dungeon(void)
{
	printf("+++++\n+@+++\n+++++\n");
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