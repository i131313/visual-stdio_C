#include<stdio.h>
int main(void)
{
	int a,b;

	printf("1つ目の整数を入力してください");

	scanf("%d",&a);

	printf("2つ目の整数を入力してください");

	scanf("%d",&b);

	printf("2つの整数の和は%dです。\n",a+b);
	printf("2つの整数の差は%dです。\n",a-b);
	printf("2つの整数の積は%dです。\n",a*b);
	printf("2つの整数の商は%dです。\n",a/b);
	printf("2つの整数の剰余は%dです。\n",a%b);

	return(0);
}