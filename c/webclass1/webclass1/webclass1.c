#include <stdio.h>
 int main(void)
 {
   double a,b,c,t;
   a=100;
   b=4.5;
   c=40000000;

   printf("100m4.5秒ペースで地球一周すると%7.0f秒かかる。\n",c/a*b);
   printf("%7.0fを分になおすと%g分で%g分を時間になおすと%g時間となる。\n",c/a*b,c/a*b/60,c/a*b/60,c/a*b/60/60);
   printf("よって%g÷24で地球一周にかかる時間は%d日です。",c/a*b/60/60,(int)(c/a*b/60/60/24));

   return(0);
 }
