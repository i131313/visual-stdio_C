/*西暦を入力してうるう年かどうか調べるプログラムです*/

#include<stdio.h>
int main(void)
{
	int a;
	printf("西暦を入力してください:");
	scanf("%d",&a);

	if(a%4==0 && (a%100!=0  || a%400==0)){
		printf("入力した西暦はうるう年です。");
	}
	else{
		printf("入力した西暦はうるう年ではありません。");
	}
	return(0);
}