#include<stdio.h>

void SwapArray(int x[], int y[] );

int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int b[] = {0, 0, 0, 0, 0, 0};
    int i;

	printf("SwapArray�֐����Ăяo���O��int�^�z��a, b�̊e�v�f�l���o�͂��܂��D\n");

	for(i = 0; i < 6; i++)
		printf("a[%d] = %d \t b[%d] = %d \n",i,a[i],i,b[i]);

	printf("\n  SwapArray�֐����Ăяo���܂��D\n");

	SwapArray(a, b );

	printf("SwapArray�֐����Ăяo�������int�^�z��a, b�̊e�v�f�l���o�͂��܂��D\n");

	for(i = 0; i < 6; i++)
		printf("a[%d] = %d \t b[%d] = %d \n",i,a[i],i,b[i]);

	return 0;
}

void SwapArray(int x[], int y[])
{
	int c[6] /*= {6,7,8,9,0,9}*/  ;
	int j;

	for(j = 0; j < 6; j++)
		c[j] = *(x+j);

	for(j = 0; j < 6; j++)
		x[j] = *(y+j);

	for(j = 0; j < 6; j++)
		y[j] = *(c+j);
}
