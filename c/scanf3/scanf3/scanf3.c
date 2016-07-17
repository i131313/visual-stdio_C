#include<stdio.h>
int main(void)
{
	double x,y;

	printf("1つ目の実数を入力してください");

	scanf("%lf",&x);

	printf("2つ目の実数を入力してください");

	scanf("%lf",&y);

	printf("2つの実数の和は%fです。\n",x+y);
	printf("2つの実数の差は%fです。\n",x-y);
	printf("2つの実数の積は%fです。\n",x*y);
	printf("2つの実数の商は%fです。\n",x/y);

	return(0);
}