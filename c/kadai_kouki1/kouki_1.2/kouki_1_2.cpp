#include<stdio.h>

int count_zeros(int, double *);

int main(void)
{
	int n, i;
	double  x[5] = {0, 3.14, -1.4, 0, 2.6};

	printf("�v�f����5��double�^�z��x��錾���܂��D\n");
	printf("�e�v�f���ɂ͂��ꂼ�ꎟ�̒l���i�[���܂�\n");

	for(i = 0; i < 5; i++)
		printf("x[%d] = %1.2f\n", i, x[i]);

	n = count_zeros(5, x);

	printf("count_zeros�֐��Œl��0�ł���v�f�̌����J�E���g���܂��D\n");
	printf("�z��x�̒��ɂ͒l��0�̗v�f��%d����܂��D\n",n);

	return 0;
}

int count_zeros(int youso, double *x)
{
	int j;
	int zero = 0;

	for(j = 0; j < 5; j++)
		if(x[j] == 0) zero += 1;
	
	return zero;
}