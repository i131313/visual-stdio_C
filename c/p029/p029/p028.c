#include<stdio.h>
int main(void)
{
	int i,x;

	for(x=2; x<=1000; x++){
		for(i=2; i<x;i++){
			if((x%i)==0){
				break;
			}
		}
		if(x==i){
			printf("%4d",x);
		}
	}
	return(0);
}