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
	    //printf("�L�����̖��O���m�肵�Ă悢���B������%c�ł����B\n",result);
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
	printf("���K�������t�C�[�m�ŏ��̎��\n\n");
}

char make_character(void)
{
	char name[10];
	char confirmation;

	printf("�L�����N�^�[�̖��O����͂��Ă��������F");
	scanf("%s",name);
	printf("�L�����N�^�[�̖��O��%s�ł悢�ł����H�iY/N�j",name);
	scanf("%*c%c",&confirmation);
	return confirmation;
	if(confirmation == 'y') 
		printf("�������܂����B���O���m�肵�܂��B\n");
	
}