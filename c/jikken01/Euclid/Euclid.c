#include<stdio.h>

int GCD(int,int);
int l;
int main(void)
{
	int m,n;

	printf("14�ԁ@������\n\n");

	printf("���͂���2�̐����̍ő���񐔂ƍŏ����{�������߂܂��B\n");
	do
	{
	   printf("2�̐���m,n����͂��Ă�������\n");
	   scanf("%d",&m);
	   scanf("%d",&n);
	   if( m<=0 || n<=0 )
	   {
		   printf("���̐�������͂��Ă��������B\n");
		   continue;
	   }
	}while( m<=0 || n<=0);
	
	
    printf("�ő���񐔂�%d�ł��B\n",GCD(m,n));
	printf("�ŏ����{����%d�ł��B\n",(m*n)/l);

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
 printf("5�ԁ@�ɓ�����Y\n");
 for(;;){
 printf("�ŏ����񐔂����߂܂��B\n��̒l����͂��Ă�������:");
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
    printf("%d��%d�̍ő���񐔂�%d�ł��B\n�ő���{����%d�ł��B\n",M,N,a,(m*n)/a);}
int GCD(int m,int n){
 int r;
 printf("GCD(%d,%d)",m,n);
 do{
  r=m%n;
  m=n;
  n=r;
     printf("=GCD(%d,%d)\n",m,n);}while(n!=0);
 return m;}*/
