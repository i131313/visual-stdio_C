/*教科書p．71　例題12
　10人の得点データが配列a[]に入っているとき
  合計と平均を求めて表示
 */
#include<stdio.h>
int main (void)
{
	int a[10]={56,67,63,45,80,56,78,99,45,66};
	int sum,heikin,i;
	sum=0;
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	heikin=sum/10;
	printf("合計=%d\n",sum);
	printf("平均=%d\n",heikin);
	printf("平均=%f\n",(double)sum/10);
	return 0;
}
