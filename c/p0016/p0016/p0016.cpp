#include<stdio.h>
int main(void)
{
	char m,n;
	m=65;
	m=0x41;
	m='A';
	printf("%c\n",m);

	m='B';
	printf("%c\n",m-'A'+'a');

	m='d';
	printf("%c\n",m-'a'+'A');

	printf("�啶���̉p�����P���͂��Ă��������F");
	scanf("%c",&m);
	printf("%c�̏�������%c�ł�\n",m,m-'A'+'a');

	fflush(stdin);
	printf("�������̉p�����P���͂��Ă��������F");
	m=getchar();    /* scanf("%c",&m);*/
	printf("%c�̑啶����%c�ł�\n",n,n-'a'+'A');

	return(0);
}

	

	
	