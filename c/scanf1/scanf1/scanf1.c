#include<stdio.h>
int main(void)
{
	double r,a,b;

	printf("���a��1���͂��Ă�������:");

	scanf("%lf",&r);


	a=2*r*3.1415;
	b=r*r*3.1415;

	printf("���͂��ꂽ�����̉~����%lf�ł��B\n",a);
	printf("���͂��ꂽ�����̉~�̖ʐς�%lf�ł��B\n",b);

	return(0);
}