#include<stdio.h>
int main(void)
{
	double x,y;

	printf("1�ڂ̎�������͂��Ă�������");

	scanf("%lf",&x);

	printf("2�ڂ̎�������͂��Ă�������");

	scanf("%lf",&y);

	printf("2�̎����̘a��%f�ł��B\n",x+y);
	printf("2�̎����̍���%f�ł��B\n",x-y);
	printf("2�̎����̐ς�%f�ł��B\n",x*y);
	printf("2�̎����̏���%f�ł��B\n",x/y);

	return(0);
}