#include<stdio.h>
int main(void)
{
	double x=1.2, y=3.4;
	int sel;

	printf("２つの実数1.2，3.4の和，差，積，商のいずれかを求めます。\n");
	printf("どの演算を行うか1～４の整数で選択してください。\n");
	printf("和（1）　差（2）　積（3）　商（4）：");
	scanf("%d",&sel);

	if(sel==1){
		printf("x+y=%f\n",x+y);
	}
	else if (sel==2){
		printf("x-y=%f\n",x-y);
	}
	else if(sel==3){
		printf("x×y=%f",x*y);
	}
	else if(sel==4){
		printf("x÷y=%f",x/y);
	}
	else{
		printf("1～４のいずれかの整数で選択してください\n");
	}
	return(0);
}