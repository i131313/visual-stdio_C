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
	    printf("�L�����̖��O���m�肵�Ă悢���B������%c�ł����B\n",result);
	}
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