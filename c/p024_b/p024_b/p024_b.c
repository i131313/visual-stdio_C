#include<stdio.h>
int main(void)
{
	int i,sum;

	sum=0;

	for(i=3;i<=20;i++){
		sum=sum+=i;
	}
	printf("3+4+....+20=%d\n",sum);
	return(0);
}