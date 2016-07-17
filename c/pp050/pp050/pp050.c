#include<stdio.h>
int main(void)
{
	int a,b,max;

	printf("1‚Â–Ú‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d",&a);
	printf("2‚Â–Ú‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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