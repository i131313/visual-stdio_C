#include<stdio.h>
int main(void)
{
	char moji;
	int juu;
	int juuroku;
	float jissu;
	double jissu2;

	printf("1文字入力>　");
	scanf("%c",&moji);
	printf("1文字出力： %c\n",moji);
	printf("10進出力： %d\n",moji);
    printf("16進出力： %x\n",moji);
	
	printf("10進入力>　");
	scanf("%d",&juu);
	printf("10進出力： %d\n",juu);
	printf("16進出力： %x\n",juu);

	printf("16進入力>　");
	scanf("%x",&juuroku);
	printf("10進出力： %d\n",juuroku);
	printf("16進出力： %x\n",juuroku);
	
	printf("float 入力>　");
	scanf("%f",&jissu);
	printf("float 出力>  %f\n",jissu);
	printf("double 入力>　");
	scanf("%lf",&jissu2);
	printf("double 出力>  %f\n",jissu2);

	return 0;
}