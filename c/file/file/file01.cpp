#include<stdio.h>
int main(void)
{
	FILE *fp;

	fp = fopen("test.txt","w");

	if(fp == NULL)
	{
		perror("�t�@�C���E�I�[�v���Ɏ��s���܂���\n");
		return -1;

	}
	else 
		printf("�t�@�C���𐳏�ɃI�[�v�����܂���\n");

	fprintf(fp,"���߂Ẵt�@�C�����o�͂ł�.\n");

	if(fclose(fp) != 0)
	{
		perror("�t�@�C���̃N���[�Y�Ɏ��s���܂���\n");
		return -1;
	}
	else 
		printf("�t�@�C���𐳏�ɃN���[�Y���܂���\n");

	return 0;
}