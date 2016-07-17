#include<stdio.h>
#include<stdlib.h>
#include<conio.h> //これを追加
#include<time.h>

#define X 10 //定数Xを定義（ダンジョンの横幅）
#define Y 10 //定数Yを定義（ダンジョンの縦幅）
#define Z 2  //定数Zを定義（ダンジョンの深さ）

void show_title(void);
char make_character(void);
void show_dungeon(struct player, struct enemy);  // これを追加

char name[10];
char dungeon[Z][X][Y]  =  {{{ 1, 1, 1, 1, 1, 0, 0, 0, 1, 1},
						    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						    { 1, 1, 1, 1, 1, 0, 0, 0, 1, 0},
						    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
						    { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
						    { 1, 0, 0, 0, 0, 1, 1, 0, 1, 0},
						    { 1, 0, 1, 1, 1, 1, 1, 0, 1, 0},
						    { 1, 0, 1, 2, 0, 0, 1, 0, 1, 0},
						    { 1, 0, 1, 1, 1, 0, 1, 0, 1, 0},
                            { 1, 0, 0, 0, 0, 0, 1, 0, 0, 0}},

							{{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						     { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
						     { 0, 1, 1, 1, 1, 0, 0, 0, 1, 0},
						     { 0, 0, 0, 0, 1, 0, 1, 0, 1, 0},
						     { 1, 1, 1, 0, 1, 0, 1, 0, 1, 0},
						     { 0, 0, 0, 0, 1, 0, 1, 0, 1, 0},
						     { 0, 1, 1, 1, 1, 0, 1, 0, 1, 0},
						     { 0, 0, 0, 3, 1, 0, 1, 0, 1, 0},
						     { 1, 1, 1, 1, 1, 0, 1, 0, 1, 0},
                             { 2, 0, 0, 0, 0, 0, 1, 0, 0, 0}}};

/* PCの属性を格納する構造体（設計図の宣言） */
struct player
{
	int x, y, level;     // PCの現在位置
	char name[10];       // PCの名前
	int hp, mp;          // PCの体力と精神力
	int food;            // PCの食料数
	int luck;            // PCの運 
	int potion;          // PCのポーション数
};

/* モンスターの属性を格納する構造体（設計図の宣言） */
struct enemy
{
	int x, y;            // モンスターの現在位置
	int attack;          // モンスターの攻撃力
	int level;           // モンスターがいる階
	int id;              // モンスターの種類を識別する番号
	int hp;              // モンスターの体力
	int move;            // モンスターが一度に移動できるマスの数
	int search;          // モンスターが現在位置から
};
int main(void)
{
	char result = 'n';
	char direction; //入力された移動キーを格納する変数
	int key;
	int i, j; //ループ制御変数

	/* playerの構造体設計図からPCという名前の構造体変数を作る */
	struct player pc = {1, 0, 0, "hogehoge", 100, 100, 0, 0, 0};

	/* enemyの構造体設計図からmonsterという名前の構造体変数を作る */
	struct enemy monster = {9, 9, 10, 0, 0, 10, 1, 1};
	

	int damege; // モンスターが与えるダメージ
	int dMonster;

	srand(time(NULL));

	show_title();
	while( (result != 'y') && (result != 'Y') )
	{
		result = make_character();
	}
	system("cls"); //タイトル表示をクリアする
	/*
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][0], dungeon[1][0], dungeon[2][0], dungeon[3][0], dungeon[4][0], dungeon[5][0], dungeon[6][0], dungeon[7][0], dungeon[8][0], dungeon[9][0]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][1], dungeon[1][1], dungeon[2][1], dungeon[3][1], dungeon[4][1], dungeon[5][1], dungeon[6][1], dungeon[7][1], dungeon[8][1], dungeon[9][1]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][2], dungeon[1][2], dungeon[2][2], dungeon[3][2], dungeon[4][2], dungeon[5][2], dungeon[6][2], dungeon[7][2], dungeon[8][2], dungeon[9][2]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][3], dungeon[1][3], dungeon[2][3], dungeon[3][3], dungeon[4][3], dungeon[5][3], dungeon[6][3], dungeon[7][3], dungeon[8][3], dungeon[9][3]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][4], dungeon[1][4], dungeon[2][4], dungeon[3][4], dungeon[4][4], dungeon[5][4], dungeon[6][4], dungeon[7][4], dungeon[8][4], dungeon[9][4]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][5], dungeon[1][5], dungeon[2][5], dungeon[3][5], dungeon[4][5], dungeon[5][5], dungeon[6][5], dungeon[7][5], dungeon[8][5], dungeon[9][5]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][6], dungeon[1][6], dungeon[2][6], dungeon[3][6], dungeon[4][6], dungeon[5][6], dungeon[6][6], dungeon[7][6], dungeon[8][6], dungeon[9][6]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][7], dungeon[1][7], dungeon[2][7], dungeon[3][7], dungeon[4][7], dungeon[5][7], dungeon[6][7], dungeon[7][7], dungeon[8][7], dungeon[9][7]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][8], dungeon[1][8], dungeon[2][8], dungeon[3][8], dungeon[4][8], dungeon[5][8], dungeon[6][8], dungeon[7][8], dungeon[8][8], dungeon[9][8]);
	printf("%d%d%d%d%d%d%d%d%d%d\n", dungeon[0][9], dungeon[1][9], dungeon[2][9], dungeon[3][9], dungeon[4][9], dungeon[5][9], dungeon[6][9], dungeon[7][9], dungeon[8][9], dungeon[9][9]);
	*/

	/*
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][0]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][1]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][2]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][3]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][4]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][5]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][6]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][7]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][8]);
	}
	printf("\n");
	for( i = 0; i < 10; i++)
	{
		printf("%d", dungeon[i][9]);
	}

	printf("\n");
	*/

	/* ダンジョンの描画 */
	system("cls");
	show_dungeon(pc, monster);

	while( 1 )	{
		if( kbhit() ){
			key = getch();
			if(key == 119) //w ↑
			{
				if( (pc.y >= 1) && (dungeon[pc.level][pc.x][pc.y-1] != 1) ) pc.y--;
			}
			if(key == 115) //s ↓
			{
				if( (pc.y <= Y-2) && (dungeon[pc.level][pc.x][pc.y+1] != 1) ) pc.y++;
			}
			if(key == 97) //a ←
			{
				if( (pc.x >= 1) && (dungeon[pc.level][pc.x-1][pc.y] != 1) ) pc.x--;
			}
			if(key == 100) //d →
			{
				if( (pc.x <= X-2) && (dungeon[pc.level][pc.x+1][pc.y] != 1) ) pc.x++;
			}

			/* ダンジョンの描画 */
			system("cls");
			show_dungeon(pc, monster);

			/* モンスターのターン */
			//for( i = 0; i < 3; i++)
			//{
				if( ((pc.x == monster.x) && (pc.y == monster.y - 1)) || 
					((pc.y == monster.y) && (pc.x == monster.x + 1)) || 
					((pc.x == monster.x) && (pc.y == monster.y + 1)) || 
					((pc.y == monster.x) && (pc.x == monster.x - 1)) ) // 探索範囲のチェック
			{ // 探索範囲内にPCがいれば（PCを攻撃する）
				printf("スライム「見つけたぞ！」\n");
				getch();

				if( (rand()%100+1) <= monster.attack )
				{
					damege = rand() % monster.attack + 1;
					printf("スライムの攻撃がヒットした！PCに%dのダメージ",damege);
					pc.hp -= damege;
				
				}
				else 
				{
					printf("スライムの攻撃は外れた\n");
				}
				getch();

				
			}
			else
			{ // いなければ（移動）
			dMonster = rand() % 4; // 移動方向 0:上 1:右 2:下 3:左
			switch (dMonster)
			{
			   case 0: // 上方向に移動
				   if((monster.y >= 1) && (dungeon[monster.level][monster.x][monster.y-1] != 1)) monster.y--;
			       break;
			   
			   case 2: // 下方向に移動
                   if((monster.y <= 8) && (dungeon[monster.level][monster.x][monster.y+1] != 1)) monster.y++;
			       break;

			   case 3: // 左方向に移動
			       if((monster.x >= 1) && (dungeon[monster.level][monster.x-1][monster.y] != 1)) monster.x--;
				   break;
			
			   case 1: // 右方向に移動
			       if((monster.x <= 8) && (dungeon[monster.level][monster.x+1][monster.y] != 1)) monster.x++;
				   break;
			   
			   default:
				   printf("変数dMonsterの値が想定外です！:%d",dMonster);
				   break;
			
			}
			}
			//}
			
			
			if(dungeon[pc.level][pc.x][pc.y] == 2)
			{
				printf("%s「おや、下り階段があるぞ！」\n(キーを押してください)",pc.name);
				while(1){
					if(kbhit() && pc.level < 1){
						pc.level ++;
					    break;
					}
				}
			}
			else if(dungeon[pc.level][pc.x][pc.y] == 3)
			{
				printf("%s「おや、上り階段があるぞ！」\n(キーを押してください)",name);
			    while(1){
					if(kbhit()){
						pc.level --;
						break;
					}
				}
			}
			/* ダンジョンの描画 */
			system("cls");
			show_dungeon(pc, monster);
			
		}
	}
	/* show_dungeon(); */ // ダンジョンを表示する

}

/* ダンジョン表示 */
void show_dungeon(struct player pc, struct enemy monster)
{
	int i, j;
	//int xPC, yPC;
	//int dungeon[10][10];

	for( j = 0; j < Y; j++ ){
		for( i = 0; i < X; i++ ){
			if( i == pc.x && j == pc.y ) printf("＠"); //全角で
			else if( i == monster.x && j == monster.y) printf("ｓ");
			/*
	        else if( i == xMonster[0] && j == yMonster[0] ) printf("ｓ");
			else if( i == xMonster[1] && j == yMonster[1] ) printf("ｓ");
			else if( i == xMonster[2] && j == yMonster[2] ) printf("ｓ");
			*/
			else if( dungeon[pc.level][i][j] == 0 ) printf("□");
			else if( dungeon[pc.level][i][j] == 2 ) printf("＞");
			else if( dungeon[pc.level][i][j] == 3 ) printf("＜");
			else printf("■"); //全角で
		}
		switch (j)
		{
		    case 0:
				printf("********************");
				break;

			case 1:
				printf("* 現在の階：地下%d階",pc.level+1);
				break;

			case 2:
				printf("* 現在位置：(%d, %d)",pc.x,pc.y);
				break;

			case 3:
				printf("* 名　　前：%s",name);
				break;

			case 4:
				printf("* 体　　力：%d",pc.hp);
				break;

			case 5:
				printf("********************");

			default:
				break;
		}
	
		printf("\n");
	}
	
}

void show_title(void)
{
	system("cls");
	printf("見習い魔術師イーノ最初の受難\n");
}

char make_character(void)
{
	
	char confirmation;

	printf("キャラクターの名前を入力してください:");
	scanf("%s", name);
	printf("キャラクターの名前は%sでよいですか？(Y/N)", name);
	scanf("%*c%c", &confirmation); 

	return confirmation; //ここを追加
}
