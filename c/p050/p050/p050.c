#include<stdio.h>
int main(void)
{
	int i;
	double dat , sum;

	printf("���v�ƕ��ς����߂܂��B�K�v�Ȃ����f�[�^����͂��Ă��������B�I���F^Z\n");
	for(sum=0,i=0;scanf("%lf",&dat)!=EOF;i++){
		sum+=dat;
	}
	if(i!=0)
		printf("���v���@%f\t ���ρ� %f\n",sum,sum/(double)i);
	else
		printf("�f�[�^������܂���B\n");
	return(0);
}