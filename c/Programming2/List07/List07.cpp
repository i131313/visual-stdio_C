#include<stdio.h>
#include<stdlib.h>
#include<conio.h> //�����ǉ�

#define X 10 //�萔X���`�i�_���W�����̉����j
#define Y 10 //�萔Y���`�i�_���W�����̏c���j
#define Z 2  //�萔Z���`�i�_���W�����̐[���j

void show_title(void);
char make_character(void);
void show_dungeon(void);  // �����ǉ�

int xPC = 1, yPC = 0, level =0;//�v���C���[�̍��W�i�����ʒu�� (1, 0, level =0))
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

int main(void)
{
	char result = 'n';
	char direction; //���͂��ꂽ�ړ��L�[���i�[����ϐ�
	int key;

	int i, j; //���[�v����ϐ�

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
	show_dungeon();

	while( 1 )	{
		if( kbhit() ){
			key = getch();
			if(key == 119) //w ��
			{
				if( (yPC >= 1) && (dungeon[level][xPC][yPC-1] != 1) ) yPC--;
			}
			if(key == 115) //s ��
			{
				if( (yPC <= Y-2) && (dungeon[level][xPC][yPC+1] != 1) ) yPC++;
			}
			if(key == 97) //a ��
			{
				if( (xPC >= 1) && (dungeon[level][xPC-1][yPC] != 1) ) xPC--;
			}
			if(key == 100) //d ��
			{
				if( (xPC <= X-2) && (dungeon[level][xPC+1][yPC] != 1) ) xPC++;
			}
			
			if(dungeon[level][xPC][yPC] == 2)
			{
				printf("%s�u����A����K�i�����邼�I�v\n(�L�[�������Ă�������)",name);
				while(1){
					if(kbhit() && level < 1){
						level ++;
					    break;
					}
				}
			}
			if(dungeon[level][xPC][yPC] == 3)
			{
				printf("%s�u����A���K�i�����邼�I�v\n(�L�[�������Ă�������)",name);
			    while(1){
					if(kbhit()){
						level --;
						break;
					}
				}
			}
			/* �_���W�����̕`�� */
			system("cls");
			show_dungeon();
			
		}
	}
	/* show_dungeon(); */ // �_���W������\������

}

/* �_���W�����\�� */
void show_dungeon(void)
{
	int i, j;
	//int xPC, yPC;
	//int dungeon[10][10];

	for( j = 0; j < Y; j++ ){
		for( i = 0; i < X; i++ ){
			if( i == xPC && j == yPC ) printf("��"); //�S�p��
			else if( dungeon[level][i][j] == 0 ) printf("��");
			else if( dungeon[level][i][j] == 2 ) printf("��");
			else if( dungeon[level][i][j] == 3 ) printf("��");
			else printf("��"); //�S�p��
		}
		printf("\n");
	}
	printf("(%d, %d)",xPC,yPC);
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
