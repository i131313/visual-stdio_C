#include<stdio.h>
#define N 10
void swap(int *,int *);
int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};
	int max, max_index;
	int i,j,a;
	int k = 1;

	printf("�������  {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");

	printf("[�~���Ƀ\�[�g���܂�]\n\n");

	for(i=0; i<N-1; i=i+1)
	{
		max = data[i]; max_index = i;
		for(j=N-1; j>i; j--)
		{
			if(data[j]>=max) 
			{
				max = data[j]; 
				max_index = j;
			}
		}
		if(data[max_index] != data[i])
		{
			swap(&data[max_index],&data[i]);
		

		    printf("%d��� %d �� %d ������\n",k,data[max_index],data[i]);
		    printf("{");
	        for(a=0; a<10; a++)
			{
				printf("%d",data[a]);
				if(a != 9) printf(",");
			}
			printf("}");
			printf("�\�[�g�ς� %d ��荶��\n\t��\n",data[i]);
			k ++;
		}

	}

	printf("\n�\�[�g����{");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n");
	printf("������ %d ��\n\n",k-1);
	
	return 0;
}

void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}