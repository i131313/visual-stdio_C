#include<stdio.h>
int main(void)
{
	int i,kaimono,okodukai;

	okodukai=0;

	printf("お小遣いを入力してください．：");
	scanf("%d",&okodukai);

	printf("お小遣いを%d円持っています．\n",okodukai);
	for(i=1;i<=3;i++){
		printf("いくら使いますか？＞　");
		scanf("%d",&kaimono);
		
		okodukai=okodukai-kaimono;

		if(okodukai<=0)
			break;
	
	}
	if(i<=3 && okodukai<0)
	printf("お小遣いは%d円足りなくなりました．\n",-okodukai);

	else if(i==3 && okodukai==0){
		printf("お小遣いをちょうど使いきりました\n");
	}
	else if(i<=2 && okodukai==0){
		printf("お小遣いを使いきりました．\n");
	}
	else{
		printf("お小遣いは%d円余りました．\n",okodukai);
	}
	return 0;
}