#include<stdio.h>

int str_chnum(char str[], char c);

int main(void)
{
	char str[128];
	int z;

	printf("���������͂��Ă��������F");
	scanf("%s",str);

	printf("���͂��ꂽ�������%s�ł��D\n", str);

	z = str_chnum(str,  'c');

	if(z != 0)  
		printf("������Ɋ܂܂�� c �̌���%d�ł��D \n", z);
	else
		printf("������� c �͊܂܂�Ă��܂��� \n", z);

	return 0;
}

int str_chnum(char str[], char c)
{
	int i = 0;
	int count_c = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c) count_c++;
		i++;
	}

	return count_c;
}