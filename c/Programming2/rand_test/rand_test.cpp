#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i;
	int a;

	/* RAND_MAX�̊m�F */
	//printf("%d\n",RAND_MAX);

	/* ������seed��^���� */
	srand(time(NULL));

	/* ������5�񐶐����� */
	for(i=0;i<10;i++)
	{
		a = rand()%4;
		if(a==0)      printf("��\n");
		else if(a==1) printf("�E\n");
		else if(a==2) printf("��\n");
		else if(a==3) printf("��\n");
	}

	return 0;
}