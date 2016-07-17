#include<stdio.h>
int main(void)
{
	int i,sum;

	sum=0;
	i=1;

	while(i<=10){
		sum=sum+i;
		i=i+1;
	}
	printf("1+2+3+EEE+10=%d\n",sum);
	return(0);
}