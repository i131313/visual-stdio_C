#include<stdio.h>
int ryoukin(double);
int main(void)
{
	printf("A:%d\n",ryoukin(-2.5));
	printf("B:%d\n",ryoukin(2.7));
	printf("C:%d\n",ryoukin(72.3));
	printf("D:%d\n",ryoukin(32.3));
	return 0;
}

int ryoukin (double a)
{
	if(a<=0.0){
		return(0);
	}
	else if(a<=25.0){
		return(80);
	}
	else if(a<=50.0){
		return(90);
	}
	else{
		return(-1);
	}
	
}