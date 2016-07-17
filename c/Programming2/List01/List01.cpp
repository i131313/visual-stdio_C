#include<stdio.h>

int main(void)
{
	char name[10];
	char confirmation;
	
	printf("見習い魔導師イーノ最初の受難\n\n");
	do{
		printf("キャラクターの名前を入力してください：");
	    scanf("%s",name);
	    printf("キャラクターの名前は%sで良いですか？（Y/N)",name);
	    scanf("%*c%c",&confirmation);   //通常変数の場合には＆が必要
		if(confirmation!='y' && confirmation != 'n')
			printf("yかnで選択してください\n");
	}while(confirmation != 'y');
	//printf("審議判定の結果 %d です。",confirmation =='y');
	printf("了解しました。名前を確定します。\n");
	
}