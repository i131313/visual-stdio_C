#include<stdio.h>
int main(void)
{
	int a;

	printf("整数を１つ入力してください:");
	scanf("%d",&a);

	if(a>100){
		printf("100より大\n");
	}
	else{
		printf("100以下\n");
	}

	return(0);
}