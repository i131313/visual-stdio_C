#include <stdio.h>

int main(void)
{
	double x,y,z;

	printf("�P�ڂ̎�������͂��Ă�������");
	scanf("%lf",&x);
	
	printf("�Q�ڂ̎�������͂��Ă�������");
	scanf("%lf",&y);

	z=(-3*x+y)/8*y;
	
	printf("z=%9.3f",z);
	return(0);
}