#include<stdio.h>
double calc(double,double,char);
int main(void)
{
	double x;
	int y;
	printf("(1)%f\n",calc(1.2,3.4,'a'));
	x=calc(5.6,3.4,'s')*0.1;
	printf("(2)%f\n",x);
	printf("(3)%f\n",calc(x,10.0,'p')/5.0);
	printf("(4)%f\n",calc(calc(1.2,0.6,'d'),1.0,'a'));
	y=calc(1.2,3.4,'b')+0.5;
	printf("(5)%d\n",y);
	return (0);
}

double calc(double x, double y, char sel)
{
	switch(sel){
	case'a': return(x+y);
		break;
	case's': return(x-y);
		break;
	case'p': return(x*y);
		break;
	case'd': return(x/y);
		break;
	}
	return(-12345.6);
}