/* ある商品の単価と個数を入力すると合計金額（単価×個数×1.05）が表示される関数goukeiをmain関数から呼び出す

　 使用方法（実行例）：
  　ある商品の単価と個数を入力すると合計金額（単価×個数×1.05）が表示される関数goukeiをmain関数から呼び出します
    単価[円]＝100
	個数＝10
	合計金額＝1050円

　 入力条件：
  　単価を整数型（int型）でキーボードから入力する
   （入力された数が0円以下の場合には再入力する）
    
   出力条件：
    合計金額を小数部分を切り捨ててディスプレイに出力する
　 
   その他の条件：
    単価×個数×1.05の整数部分を合計金額とする
　 
   作成時間　：予想…40分
   　　　　　　実際…40分

　 ステップ数：予想…60行
  　　　　　　 実際…66行

   作成者：小泉卓也
   作成日：2014年2月3日
*/

#include<stdio.h>

 /*関数プロトタイプ宣言*/
 /*引数は2つでint型，戻り値はint型*/
int goukei(int,int);

/*main関数*/
int main (void)
{
	int tanka;            /*商品の単価*/
	int kosuu;            /*個数*/
   
	/*プログラムの説明*/
	printf("ある商品の単価と個数を入力すると合計金額を表示します\n");  

    /*単価の入力*/  
	do{
		printf("商品の単価を入力してください。   単価[円]＝");       
		scanf("%d",&tanka);
	}while(tanka<=0);                   

    /*個数の入力*/
	printf("個数を入力してください。　個数＝");                       
	scanf("%d",&kosuu);

	/*合計金額の表示*/
	printf("合計金額は%d[円]です。",goukei(tanka,kosuu));             
	return(0); 
}
     
/*合計金額を求める関数
  引数2つの整数： x,y
  戻り値：x*y*1.05 */
int goukei(int x , int y)
{
	int z=x*y*1.05;
	return z;
}


