#include<stdio.h>

void main(void)
{
	int a[100+1];
	int i,j;

	for(i=2;i<=100;i++)
		a[i] = 1;

	for(i=2;i<=10;i++)
	{
		if(a[i] == 1)
		{
			for(j=2*i;j<=100;j++)
			{
				if(j%i==0)
					a[j] = 0;
			}
		}
	}
	printf("\n‹‚ß‚ç‚ê‚½‘f”\n");
	for(i=2;i<=100;i++)
		if(a[i] == 1)
	    	printf("%5d",i);
	        printf("\n");


}
/*#include<stdio.h>
#define NUM 100
int main(void)
{
 int s[NUM+1],i,j;
 for(i=2;i<=NUM;i++)
  s[i]=1;
 for(i=2;i<=NUM;i++){
  if(s[i]==1){
   for(j=2*i;j<=NUM;j++){
    if(j%i==0)
     s[j]=0;}}}
 for(j=2;j<=NUM;j++)
  if(s[j]==1){
   printf("%d",j);
   printf("\n");
   }}*/