#include<stdio.h>
int main(void)
{
	int i;
	double x,sum;

	printf("5�̎����̍��v�C���ς����߂܂��B\n");

	sum=0;

	for(i=1;i<=5;i++){
		printf("��������͂��Ă��������F");
		scanf("%lf",&x);

		sum=sum+x;
	}
	printf("���v=%f, ����=%f\n",sum,sum/5.0);
	return(0);
}