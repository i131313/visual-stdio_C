#include<stdio.h>
int main(void)
{
	double a;

	do{
		printf("0以外の実数を入力してください。：");
		scanf("%lf",&a);
	}while(a==0.0);
	printf("%fの逆数は%fです。",a,1.0/a);

	return(0);
}

