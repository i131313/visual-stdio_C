#include<stdio.h>

int count_zeros(int, double *);

int main(void)
{
	int n, i;
	double  x[5] = {0, 3.14, -1.4, 0, 2.6};

	printf("要素数が5のdouble型配列xを宣言します．\n");
	printf("各要素数にはそれぞれ次の値を格納します\n");

	for(i = 0; i < 5; i++)
		printf("x[%d] = %1.2f\n", i, x[i]);

	n = count_zeros(5, x);

	printf("count_zeros関数で値が0である要素の個数をカウントします．\n");
	printf("配列xの中には値が0の要素が%dつあります．\n",n);

	return 0;
}

int count_zeros(int youso, double *x)
{
	int j;
	int zero = 0;

	for(j = 0; j < 5; j++)
		if(x[j] == 0) zero += 1;
	
	return zero;
}