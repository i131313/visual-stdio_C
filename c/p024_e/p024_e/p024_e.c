#include<stdio.h>
int main(void)
{
	int i;
	double x,sum;

	printf("5つの実数の合計，平均を求めます。\n");

	sum=0;

	for(i=1;i<=5;i++){
		printf("実数を入力してください：");
		scanf("%lf",&x);

		sum=sum+x;
	}
	printf("合計=%f, 平均=%f\n",sum,sum/5.0);
	return(0);
}