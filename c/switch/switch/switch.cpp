#include<stdio.h>

int main(void)
{
	char c;

	printf("a�`d�̕�������͂��Ă�������\n");
	scanf("%c",&c);

	switch(c)
	{
	   case 'd':
		   printf("*");
	   case'c':
		   printf("*");
	   case'b':
		   printf("*");
	   case 97:
		   printf("*");
		   break;
	   default:
		   printf("�s���ȕ��������͂���܂���\n");
		   break;

	}
	return 0;
}