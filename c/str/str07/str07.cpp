#include<stdio.h>
int str_length(char str[])
{
	int length = 0;

	while(str[length] != '\0')
		length++;

	return length;
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s",str);

	printf("������%s�̒�����%d�ł��D\n", str, str_length(str));
}