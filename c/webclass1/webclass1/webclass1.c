#include <stdio.h>
 int main(void)
 {
   double a,b,c,t;
   a=100;
   b=4.5;
   c=40000000;

   printf("100m4.5�b�y�[�X�Œn����������%7.0f�b������B\n",c/a*b);
   printf("%7.0f�𕪂ɂȂ�����%g����%g�������ԂɂȂ�����%g���ԂƂȂ�B\n",c/a*b,c/a*b/60,c/a*b/60,c/a*b/60/60);
   printf("�����%g��24�Œn������ɂ����鎞�Ԃ�%d���ł��B",c/a*b/60/60,(int)(c/a*b/60/60/24));

   return(0);
 }
