#include<stdio.h>
int main(void)
{
	double a;

	do{
		printf("0�ȊO�̎�������͂��Ă��������B�F");
		scanf("%lf",&a);
	}while(a==0.0);
	printf("%f�̋t����%f�ł��B",a,1.0/a);

	return(0);
}

