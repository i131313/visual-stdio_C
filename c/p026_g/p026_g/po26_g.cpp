#include<stdio.h>
int main(void)
{
	int i,n;
	double x,b;
	printf("最大値を求めます。\n");
	printf("何個の実数を入力しますか。：");
	scanf("%d",&n);

	printf("実数を入力してください：");
	scanf("%lf",&x);
	b=x;

	for(i=1;i<n;i++){
		printf("実数を入力してください：");
		scanf("%lf",&x);
		if(x>b){
			b=x;
		}
	}
	printf("最大値＝%f\n",b);
	return(0);
}

	