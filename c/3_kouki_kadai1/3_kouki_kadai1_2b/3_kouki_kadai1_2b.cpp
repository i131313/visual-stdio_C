#include<stdio.h>
#define N 10
int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};
	int i,j,k,x,a;

	printf("�������    {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");
	printf("[�����Ƀ\�[�g���܂�]\n");
	printf("%d�����Ƀ\�[�g�ς݂Ƃ���\n\n",data[0]);


	for(i=1; i<N; i++)
	{
		x = data[i];
		j = i;
		k = 0;

		printf("���\�[�g�f�[�^�̐擪�v�f%d���Ƃ�C\n",x);
		printf("%d��菬�����v�f�ɏo��܂�1�����̗v�f��������\n",x);

		while((data[j-1]>x) && (j>0))
		{
			data[j] = data[j-1];

			
			printf("{");
	        for(a=0; a<10; a++)
			{
				printf("%d",data[a]);
				if(a != 9) printf(",");
			}
			printf("}\n\n");

			j = j-1;
			k ++;
		}
		data[j] = x;

		if(k != 0)
		{
			printf("�K�؂ȏꏊ��%d��}������\n",x);
			printf("{");
			for(a=0; a<10; a++)
			{
				printf("%d",data[a]);
				if(a != 9) printf(",");
			}
			printf("}\n\n\n");
		}

		else
		{
			printf("\n%d��菬�����v�f���Ȃ��������߂��̂܂�\n",x);
			printf("{");
			for(a=0; a<10; a++)
			{
				printf("%d",data[a]);
				if(a != 9) printf(",");
			}
			printf("}\n\n\n");
		}
	}

	printf("\n�\�[�g����  {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");


	return 0;
}