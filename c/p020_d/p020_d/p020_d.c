#include<stdio.h>
int main(void)
{
	char c;

	printf("��������͂��Ă�������");
	scanf("%c",&c);
	
	if('a'<=c && c<='z'){
		printf("���͂��������̑啶����%c�ł��B\n",c-('a'-'A'));
	}
	else{
		printf("���͂��������̑啶����%c�ł��B\n",c);
	}
	return(0);

}