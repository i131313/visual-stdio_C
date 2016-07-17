#include<stdio.h>
int main(void)
{
	int a[]={56,67,63,45,80,56,78,99,45,66,-999};
	int sum,heikin,i;

	sum=0;
	i=0;
	while(a[i]!=-999){
		sum=sum+a[i];
		i++;
	}
	heikin=sum/i;
	printf("‡Œv%d\n",sum);
	printf("•½‹Ï%d\n",heikin);


}
	