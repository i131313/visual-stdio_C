#include<stdio.h>
int main(void)
{
	char moji;
	int juu;
	int juuroku;
	float jissu;
	double jissu2;

	printf("1��������>�@");
	scanf("%c",&moji);
	printf("1�����o�́F %c\n",moji);
	printf("10�i�o�́F %d\n",moji);
    printf("16�i�o�́F %x\n",moji);
	
	printf("10�i����>�@");
	scanf("%d",&juu);
	printf("10�i�o�́F %d\n",juu);
	printf("16�i�o�́F %x\n",juu);

	printf("16�i����>�@");
	scanf("%x",&juuroku);
	printf("10�i�o�́F %d\n",juuroku);
	printf("16�i�o�́F %x\n",juuroku);
	
	printf("float ����>�@");
	scanf("%f",&jissu);
	printf("float �o��>  %f\n",jissu);
	printf("double ����>�@");
	scanf("%lf",&jissu2);
	printf("double �o��>  %f\n",jissu2);

	return 0;
}