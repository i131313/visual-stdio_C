#include<stdio.h>

int main(void)
{
	char name[10];
	char confirmation;
	
	printf("���K�������t�C�[�m�ŏ��̎��\n\n");
	do{
		printf("�L�����N�^�[�̖��O����͂��Ă��������F");
	    scanf("%s",name);
	    printf("�L�����N�^�[�̖��O��%s�ŗǂ��ł����H�iY/N)",name);
	    scanf("%*c%c",&confirmation);   //�ʏ�ϐ��̏ꍇ�ɂ́����K�v
		if(confirmation!='y' && confirmation != 'n')
			printf("y��n�őI�����Ă�������\n");
	}while(confirmation != 'y');
	//printf("�R�c����̌��� %d �ł��B",confirmation =='y');
	printf("�������܂����B���O���m�肵�܂��B\n");
	
}