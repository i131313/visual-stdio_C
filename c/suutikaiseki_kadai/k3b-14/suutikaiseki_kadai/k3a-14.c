/* 実数 - IEEE754変換 プログラムをベースに,
　 ・変換元の実数をプログラム実行時にキーボードから入力する機能
   ・返還後のビット列を２進数でも出力する機能
   を追加する
*/


#include <stdio.h>

int main(void) {// main関数
    
    float a ; // 任意の実数
	int b[32];// 実数を２進数にした時に入れる
	int i = 0; // 繰り返しの変数
    
    unsigned int *p; // ポインタ
   
	while(1){ // 無限ループ
	printf("実数を一つ入力してください(終了したいときは0を入力)：");
	scanf("%f",&a);
	if (a == 0)  return -1; // 入力された数が0なら終了
 
    p = (unsigned int *)&a;
    printf("%13.10e : %08X\n",a, *p);

	while(i < 32) // 32回繰り返す
	{
		if(*p%2 == 1) b[i] = 1; // 実数を２で割った余りがあれば1
		else b[i] = 0; // なければ0
		*p = *p / 2; // 実数を半分にする
		i++; 
	}

	i--; // iを31にする

	printf("2進数表示\t ：");
	while (i >= 0)
	{
		printf("%d",b[i]);
		i--;
	}
	printf("\n\n\n");
	}
	 
    return 0;
}