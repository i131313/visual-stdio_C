#include<stdio.h>
#include<malloc.h>
int main(void)
{
	char *str;
	int length;

	printf("�D���ȉf��̃^�C�g���̕������́H �� ");
	scanf("%d",&length);

	str = (char *)malloc(sizeof(char) * length);

	printf("�D���ȉf��̃^�C�g���́H �� ");
	scanf("%s",str);

	printf("���͕������%s�ł�\n",str);

	return 0;

}