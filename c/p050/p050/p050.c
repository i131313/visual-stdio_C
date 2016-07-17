#include<stdio.h>
int main(void)
{
	int i;
	double dat , sum;

	printf("合計と平均を求めます。必要なだけデータを入力してください。終了：^Z\n");
	for(sum=0,i=0;scanf("%lf",&dat)!=EOF;i++){
		sum+=dat;
	}
	if(i!=0)
		printf("合計＝　%f\t 平均＝ %f\n",sum,sum/(double)i);
	else
		printf("データがありません。\n");
	return(0);
}