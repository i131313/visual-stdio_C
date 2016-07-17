/* �֐�sin x �̒l���ׂ������ŋ��߂�v���O����
�@ x �̒l���^����ꂽ���ɐ�Ό덷10^-8�ȉ��̐��x��sin x �̒l��
   ���߂�̂ɕK�v�ȋ����̍��������߂�v���O����

   sin x = (-1)^n * x^2n+1 / (2n+1)!  �̘a�@(n = 0,1,2, ... )
*/


#include<stdio.h>
#include<math.h>

double kaijo(int); //�K����v�Z����֐�

int main(void)
{
	int n = 0 ; // �����ڂ���\���ϐ�
	double s; //���� 
	double sum, xx, nn, x ; //sum:���v, xx:���q, nn:����, x:�C�ӂ̎���

	sum = 0.0;
	xx = nn = 1.0;

	printf("sin x �����߂܂�\n���� x ����͂��Ă�������(�����傫���Ƃł��܂���)�F");
	scanf("%lf",&x);
	
	printf("\n");

	while(n < 100) // 100���܂Ń��[�v
	{
		s = pow(-1.0,n);  // ����
		xx = pow(x, 2*n +1); // ���q�̌v�Z
		nn = kaijo(2*n+1); // ����̌v�Z

		sum += s *(xx / nn); // ���܂ł̍��܂ł𑫂�

		printf("%26.18e\n", sum); // �\��

		n++; 

		if(fabs(sin(x) - sum) < pow(10.0,-8)) break; // �덷��10^-8�ȉ��Ȃ�I���
	
	}
	if(n != 100) printf("\n�� %d ���ڂ܂ŕK�v\n\n",n); // 100���܂łɔ����ꂽ��
	else printf("\n���߂��܂���ł���\n\n"); // 100���Ŕ������Ȃ�������
	return 0;
}

double kaijo(int k)
{
	double b = 1; //�K��̓���
	while (k != 0) 
	{
		b *= k;
		k--;
	}
	return b;
}