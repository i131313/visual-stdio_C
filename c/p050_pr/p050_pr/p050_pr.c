#include<stdio.h>
int main(void)
{
	int i;
	double dat , sum, max , min;

	printf("合計と平均と最大値と最小値を求めます。\n必要なだけデータを入力してください。終了：^Z\n");
	if(scanf("%lf",&dat) == EOF){                    /*^Zが入力されたら終了*/
			printf("データがありません。\n");
			return 0;
	}
	max=dat;                                        /* sum=max=min=dat と一緒*/
	min=dat;
	sum=dat;
	
	for(i=1;scanf("%lf",&dat)!=EOF;i++){            /*^Zが入力されるまで繰り返し*/
		sum+=dat;
		
		if(max<dat){
			max=dat;
		}
		if(min>dat){
			min=dat;
		}
	}
	printf("合計＝　%f\t 平均＝ %f\n 最大値＝ %f\t 最小値＝　%f\n",sum,sum/(double)i,max,min);

	return(0);
}