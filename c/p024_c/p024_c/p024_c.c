#include<stdio.h>
int main(void)
{
	int i,sum;

	sum=0;

	for(i=1;i<=19;i+=2){
		sum=sum+i;
	}
	printf("1+3+5+....+19=%d\n",sum);
	return(0);
}