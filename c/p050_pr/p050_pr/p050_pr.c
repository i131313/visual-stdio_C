#include<stdio.h>
int main(void)
{
	int i;
	double dat , sum, max , min;

	printf("���v�ƕ��ςƍő�l�ƍŏ��l�����߂܂��B\n�K�v�Ȃ����f�[�^����͂��Ă��������B�I���F^Z\n");
	if(scanf("%lf",&dat) == EOF){                    /*^Z�����͂��ꂽ��I��*/
			printf("�f�[�^������܂���B\n");
			return 0;
	}
	max=dat;                                        /* sum=max=min=dat �ƈꏏ*/
	min=dat;
	sum=dat;
	
	for(i=1;scanf("%lf",&dat)!=EOF;i++){            /*^Z�����͂����܂ŌJ��Ԃ�*/
		sum+=dat;
		
		if(max<dat){
			max=dat;
		}
		if(min>dat){
			min=dat;
		}
	}
	printf("���v���@%f\t ���ρ� %f\n �ő�l�� %f\t �ŏ��l���@%f\n",sum,sum/(double)i,max,min);

	return(0);
}