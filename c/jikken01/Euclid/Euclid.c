#include<stdio.h>

int GCD(int,int);
int l;
int main(void)
{
	int m,n;

	printf("14番　小泉卓也\n\n");

	printf("入力した2つの整数の最大公約数と最小公倍数を求めます。\n");
	do
	{
	   printf("2つの整数m,nを入力してください\n");
	   scanf("%d",&m);
	   scanf("%d",&n);
	   if( m<=0 || n<=0 )
	   {
		   printf("正の整数を入力してください。\n");
		   continue;
	   }
	}while( m<=0 || n<=0);
	
	
    printf("最大公約数は%dです。\n",GCD(m,n));
	printf("最小公倍数は%dです。\n",(m*n)/l);

	return 0;
}

int GCD(int m, int n)
{
	int a;
	printf("GCD(%d,%d)\n",m,n);
	while(1)
	{
		a = n;
		n = (m%n);
		m = a;
		printf("GCD(%d,%d)\n",m,n);
		if( n==0 )
			break;
	}
	l = m;
	return l;
}

/*#include<stdio.h>
int GCD(int,int);
int main(void)
{
 int m,n,M,N,a;
 printf("5番　伊藤聡一郎\n");
 for(;;){
 printf("最小公約数を求めます。\n二つの値を入力してください:");
 scanf("%d",&m);
 scanf("%d",&n);
 if(m>0&&n>0)
  break;}
 if(m>n){
  M=m;
  N=n;}
 else{
  M=n;
  N=m;}
  a=GCD(M,N);
    printf("%dと%dの最大公約数は%dです。\n最大公倍数は%dです。\n",M,N,a,(m*n)/a);}
int GCD(int m,int n){
 int r;
 printf("GCD(%d,%d)",m,n);
 do{
  r=m%n;
  m=n;
  n=r;
     printf("=GCD(%d,%d)\n",m,n);}while(n!=0);
 return m;}*/
