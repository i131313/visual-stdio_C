#include<stdio.h>

int str_char(char str[], char c);

int main(void)
{
	char str[128];
	int z;

	printf("���������͂��Ă��������F");
	scanf("%s",str);

	printf("���͂��ꂽ�������%s�ł��D\n", str);

	z = str_char(str,  'c');

	if(z != -1)  
		printf("c �̓Y������%d�ł��D \n", z);
	else
		printf("%d \n", z);

	return 0;
}

int str_char(char str[], char c)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == c) return i;
		i++;
	}

	return -1;
}