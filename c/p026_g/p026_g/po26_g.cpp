#include<stdio.h>
int main(void)
{
	int i,n;
	double x,b;
	printf("�ő�l�����߂܂��B\n");
	printf("���̎�������͂��܂����B�F");
	scanf("%d",&n);

	printf("��������͂��Ă��������F");
	scanf("%lf",&x);
	b=x;

	for(i=1;i<n;i++){
		printf("��������͂��Ă��������F");
		scanf("%lf",&x);
		if(x>b){
			b=x;
		}
	}
	printf("�ő�l��%f\n",b);
	return(0);
}

	