#include<stdio.h>
int main(void)
{
	int a,b,max;

	printf("1�ڂ̐�������͂��Ă�������");
	scanf("%d",&a);
	printf("2�ڂ̐�������͂��Ă�������");
	scanf("%d",&b);

	if(a>b){
		max=a;	
	}
	else{
		max=b;
	}
	printf("max=%d",max);
	return(0);
}