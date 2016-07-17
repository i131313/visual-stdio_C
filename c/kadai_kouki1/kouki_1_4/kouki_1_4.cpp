#include<stdio.h>

void SwapArray(int x[], int y[], int);

int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int b[] = {0, 0, 0, 0, 0, 0};
    int i;

	printf("SwapArray関数を呼び出す前のint型配列a, bの各要素値を出力します．\n");

	for(i = 0; i < 6; i++)
		printf("a[%d] = %d \t b[%d] = %d \n",i,a[i],i,b[i]);

	printf("\n  SwapArray関数を呼び出します．\n");

	SwapArray(a, b, 6);

	printf("SwapArray関数を呼び出した後のint型配列a, bの各要素値を出力します．\n");

	for(i = 0; i < 6; i++)
		printf("a[%d] = %d \t b[%d] = %d \n",i,a[i],i,b[i]);

	return 0;
}

void SwapArray(int x[], int y[], int youso)
{
	int c[] = {5, 6, 7, 8, 9, 0};
	int j;

	for(j = 0; j < youso; j++)
	{
		c[j] = x[j];
	    x[j] = y[j];
	    y[j] = c[j];
	}
}
