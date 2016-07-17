#include<stdint.h>
#include<math.h>
int main(void)
{
	double x,y,z;

	printf("べき乗を計算します。\n底を入力してください：");
	scanf("%lf",&x);

	printf("指数を入力してください：");
	scanf("%lf",&y);

	z=pow(x,y);

	printf("%gの%g乗は%gです。",x,y,z);

    return(0);
}