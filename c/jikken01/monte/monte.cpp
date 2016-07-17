#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10  // プロット回数

int main(void)
{
	int i;              
	int aka = 0,ao = 0; 
	double x,y,z,p;    

	srand(time(NULL));
	

	for(i=0;i<N;i++)
	{
		x = (double)rand() / 32767.0;
		y = (double)rand() / 32767.0;

		z = (x*x)+(y*y);
		
		if(z <= 1) aka += 1;
		else if(z > 1) ao  += 1;
	}
	
	p = ((double) aka / (aka + ao) ) * 4.0 ;
	
	printf("円周率 = %f",p);

	printf("\t(プロット数：%d)\n\n",N);

	return 0;
}
	