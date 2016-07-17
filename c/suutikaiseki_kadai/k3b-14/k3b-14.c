/* 関数sin x の値をべき級数で求めるプログラム
　 x の値が与えられた時に絶対誤差10^-8以下の精度でsin x の値を
   求めるのに必要な級数の項数を求めるプログラム

   sin x = (-1)^n * x^2n+1 / (2n+1)!  の和　(n = 0,1,2, ... )
*/


#include<stdio.h>
#include<math.h>

double kaijo(int); //階乗を計算する関数

int main(void)
{
	int n = 0 ; // 何項目かを表す変数
	double s; //符号 
	double sum, xx, nn, x ; //sum:合計, xx:分子, nn:分母, x:任意の実数

	sum = 0.0;
	xx = nn = 1.0;

	printf("sin x を求めます\n実数 x を入力してください(数が大きいとできません)：");
	scanf("%lf",&x);
	
	printf("\n");

	while(n < 100) // 100項までループ
	{
		s = pow(-1.0,n);  // 符号
		xx = pow(x, 2*n +1); // 分子の計算
		nn = kaijo(2*n+1); // 分母の計算

		sum += s *(xx / nn); // 今までの項までを足す

		printf("%26.18e\n", sum); // 表示

		n++; 

		if(fabs(sin(x) - sum) < pow(10.0,-8)) break; // 誤差が10^-8以下なら終わる
	
	}
	if(n != 100) printf("\n第 %d 項目まで必要\n\n",n); // 100項までに抜けれたら
	else printf("\n求められませんでした\n\n"); // 100項で抜けられなかったら
	return 0;
}

double kaijo(int k)
{
	double b = 1; //階乗の答え
	while (k != 0) 
	{
		b *= k;
		k--;
	}
	return b;
}