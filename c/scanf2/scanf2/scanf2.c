#include<stdio.h>
int main(void)
{
	int a,b;

	printf("1�ڂ̐�������͂��Ă�������");

	scanf("%d",&a);

	printf("2�ڂ̐�������͂��Ă�������");

	scanf("%d",&b);

	printf("2�̐����̘a��%d�ł��B\n",a+b);
	printf("2�̐����̍���%d�ł��B\n",a-b);
	printf("2�̐����̐ς�%d�ł��B\n",a*b);
	printf("2�̐����̏���%d�ł��B\n",a/b);
	printf("2�̐����̏�]��%d�ł��B\n",a%b);

	return(0);
}