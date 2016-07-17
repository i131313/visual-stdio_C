#include<stdio.h>
int main(void)
{
	double x=1.2,y=3.4;
	char sel;

	printf("２つの実数1.2，3.4の和，差，積，商のいずれかを求めます。\n");
	printf("どの演算を行うかa,s,p,dの文字で選択してください。\n");
	printf("和（a）　差（s）　積（p）　商（d）：");
	scanf("%c",&sel);
    
    switch (sel){
	case 'a' : printf("x+y=%f\n",x+y);
		break;
	case 's' : printf("x-y=%f\n",x-y);
		break;
	case 'p'  : printf("x×y=%f\n",x*y);
		break;
	case 'd' : printf("x÷y=%f\n",x/y);
		break;
	default :
		printf("a,s,p,dのいずれかの整数で選択してください\n");
	}
	return(0);
}

