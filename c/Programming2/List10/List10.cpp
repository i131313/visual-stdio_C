#include<stdio.h>
#include<stdlib.h>
#include<conio.h> //�����ǉ�
#include<time.h>

#define X 10 //�萔X���`�i�_���W�����̉����j
#define Y 10 //�萔Y���`�i�_���W�����̏c���j
#define Z 2  //�萔Z���`�i�_���W�����̐[���j

void show_title(void);
char make_character(void);
void show_dungeon(struct player, struct enemy);  // �����ǉ�

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

/* PC�̑������i�[����\���́i�݌v�}�̐錾�j */
struct player
{
	int x, y, level;     // PC�̌��݈ʒu
	char name[10];       // PC�̖��O
	int hp, mp;          // PC�̗̑͂Ɛ��_��
	int food;            // PC�̐H����
	int luck;            // PC�̉^ 
	int potion;          // PC�̃|�[�V������
};

/* �����X�^�[�̑������i�[����\���́i�݌v�}�̐錾�j */
struct enemy
{
	int x, y;            // �����X�^�[�̌��݈ʒu
	int attack;          // �����X�^�[�̍U����
	int level;           // �����X�^�[������K
	int id;              // �����X�^�[�̎�ނ����ʂ���ԍ�
	int hp;              // �����X�^�[�̗̑�
	int move;            // �����X�^�[����x�Ɉړ��ł���}�X�̐�
	int search;          // �����X�^�[�����݈ʒu����
};
int main(void)
{
	char result = 'n';
	char direction; //���͂��ꂽ�ړ��L�[���i�[����ϐ�
	int key;
	int i, j; //���[�v����ϐ�

	/* player�̍\���̐݌v�}����PC�Ƃ������O�̍\���̕ϐ������ */
	struct player pc = {1, 0, 0, "hogehoge", 100, 100, 0, 0, 0};

	/* enemy�̍\���̐݌v�}����monster�Ƃ������O�̍\���̕ϐ������ */
	struct enemy monster = {9, 9, 10, 0, 0, 10, 1, 1};
	

	int damege; // �����X�^�[���^����_���[�W
	int dMonster;

	srand(time(NULL));

	show_title();
	while( (result != 'y') && (result != 'Y') )
	{
		result = make_character();
	}
	system("cls"); //�^�C�g���\�����N���A����
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

	/* �_���W�����̕`�� */
	system("cls");
	show_dungeon(pc, monster);

	while( 1 )	{
		if( kbhit() ){
			key = getch();
			if(key == 119) //w ��
			{
				if( (pc.y >= 1) && (dungeon[pc.level][pc.x][pc.y-1] != 1) ) pc.y--;
			}
			if(key == 115) //s ��
			{
				if( (pc.y <= Y-2) && (dungeon[pc.level][pc.x][pc.y+1] != 1) ) pc.y++;
			}
			if(key == 97) //a ��
			{
				if( (pc.x >= 1) && (dungeon[pc.level][pc.x-1][pc.y] != 1) ) pc.x--;
			}
			if(key == 100) //d ��
			{
				if( (pc.x <= X-2) && (dungeon[pc.level][pc.x+1][pc.y] != 1) ) pc.x++;
			}

			/* �_���W�����̕`�� */
			system("cls");
			show_dungeon(pc, monster);

			/* �����X�^�[�̃^�[�� */
			//for( i = 0; i < 3; i++)
			//{
				if( ((pc.x == monster.x) && (pc.y == monster.y - 1)) || 
					((pc.y == monster.y) && (pc.x == monster.x + 1)) || 
					((pc.x == monster.x) && (pc.y == monster.y + 1)) || 
					((pc.y == monster.x) && (pc.x == monster.x - 1)) ) // �T���͈͂̃`�F�b�N
			{ // �T���͈͓���PC������΁iPC���U������j
				printf("�X���C���u���������I�v\n");
				getch();

				if( (rand()%100+1) <= monster.attack )
				{
					damege = rand() % monster.attack + 1;
					printf("�X���C���̍U�����q�b�g�����IPC��%d�̃_���[�W",damege);
					pc.hp -= damege;
				
				}
				else 
				{
					printf("�X���C���̍U���͊O�ꂽ\n");
				}
				getch();

				
			}
			else
			{ // ���Ȃ���΁i�ړ��j
			dMonster = rand() % 4; // �ړ����� 0:�� 1:�E 2:�� 3:��
			switch (dMonster)
			{
			   case 0: // ������Ɉړ�
				   if((monster.y >= 1) && (dungeon[monster.level][monster.x][monster.y-1] != 1)) monster.y--;
			       break;
			   
			   case 2: // �������Ɉړ�
                   if((monster.y <= 8) && (dungeon[monster.level][monster.x][monster.y+1] != 1)) monster.y++;
			       break;

			   case 3: // �������Ɉړ�
			       if((monster.x >= 1) && (dungeon[monster.level][monster.x-1][monster.y] != 1)) monster.x--;
				   break;
			
			   case 1: // �E�����Ɉړ�
			       if((monster.x <= 8) && (dungeon[monster.level][monster.x+1][monster.y] != 1)) monster.x++;
				   break;
			   
			   default:
				   printf("�ϐ�dMonster�̒l���z��O�ł��I:%d",dMonster);
				   break;
			
			}
			}
			//}
			
			
			if(dungeon[pc.level][pc.x][pc.y] == 2)
			{
				printf("%s�u����A����K�i�����邼�I�v\n(�L�[�������Ă�������)",pc.name);
				while(1){
					if(kbhit() && pc.level < 1){
						pc.level ++;
					    break;
					}
				}
			}
			else if(dungeon[pc.level][pc.x][pc.y] == 3)
			{
				printf("%s�u����A���K�i�����邼�I�v\n(�L�[�������Ă�������)",name);
			    while(1){
					if(kbhit()){
						pc.level --;
						break;
					}
				}
			}
			/* �_���W�����̕`�� */
			system("cls");
			show_dungeon(pc, monster);
			
		}
	}
	/* show_dungeon(); */ // �_���W������\������

}

/* �_���W�����\�� */
void show_dungeon(struct player pc, struct enemy monster)
{
	int i, j;
	//int xPC, yPC;
	//int dungeon[10][10];

	for( j = 0; j < Y; j++ ){
		for( i = 0; i < X; i++ ){
			if( i == pc.x && j == pc.y ) printf("��"); //�S�p��
			else if( i == monster.x && j == monster.y) printf("��");
			/*
	        else if( i == xMonster[0] && j == yMonster[0] ) printf("��");
			else if( i == xMonster[1] && j == yMonster[1] ) printf("��");
			else if( i == xMonster[2] && j == yMonster[2] ) printf("��");
			*/
			else if( dungeon[pc.level][i][j] == 0 ) printf("��");
			else if( dungeon[pc.level][i][j] == 2 ) printf("��");
			else if( dungeon[pc.level][i][j] == 3 ) printf("��");
			else printf("��"); //�S�p��
		}
		switch (j)
		{
		    case 0:
				printf("********************");
				break;

			case 1:
				printf("* ���݂̊K�F�n��%d�K",pc.level+1);
				break;

			case 2:
				printf("* ���݈ʒu�F(%d, %d)",pc.x,pc.y);
				break;

			case 3:
				printf("* ���@�@�O�F%s",name);
				break;

			case 4:
				printf("* �́@�@�́F%d",pc.hp);
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
	printf("���K�����p�t�C�[�m�ŏ��̎��\n");
}

char make_character(void)
{
	
	char confirmation;

	printf("�L�����N�^�[�̖��O����͂��Ă�������:");
	scanf("%s", name);
	printf("�L�����N�^�[�̖��O��%s�ł悢�ł����H(Y/N)", name);
	scanf("%*c%c", &confirmation); 

	return confirmation; //������ǉ�
}
