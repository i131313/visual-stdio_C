#include<stdio.h>
int main(void)
{
	int wararerusuu, warusuu,i,sentaku;

	for(;;){
		printf("整数値を2つ入力してください．\n＞");
		scanf("%d",&wararerusuu);
		printf("＞");
		scanf("%d",&warusuu);
		if(warusuu==0){
			printf("0で割り算はできません．\n");
			continue;
		}
		printf("%d ÷ %d = %d　余り %d\n",wararerusuu,warusuu,wararerusuu/warusuu,wararerusuu%warusuu);
		printf("続けますか？（1:yes 2:no）＞");
		scanf("%d",&sentaku);
		if(sentaku==1){
			continue;
		}
		else{
			break;
		}
	}
	return 0;
}