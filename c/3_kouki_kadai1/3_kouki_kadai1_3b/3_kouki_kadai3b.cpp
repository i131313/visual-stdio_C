#include<stdio.h>
void push_heap(int[], int);
int delete_maximum(int[],int[]);
void swap(int *, int *);

int H_size = 0;
int S_size = 0;
int k,big;
int m = 0;

int main(void)
{
	int H[11] = {};
	int S[10] = {};

    int a;

	printf("�q�[�v�\�[�g���J�n���܂�\n\n");

	for (a=0; a<11; a++)
	{
		H[a] = H[a+1];
	}

	push_heap(H,42);
	push_heap(H,33);
	push_heap(H,78);
	push_heap(H,19);
	push_heap(H,46);
	push_heap(H,63);
	push_heap(H,25);
	push_heap(H,11);
	push_heap(H,54);
	push_heap(H,17);

	printf("\n");
	for(a=0; a<10; a++)
	{
		delete_maximum(H,S);
		printf("���̃f�[�^�����o���ăq�[�v��\n");
		printf("���̃f�[�^ �F %d\t",S[S_size]);
		S_size++;
		printf("�ăq�[�v�� �F ");
		for(int a = 1; a<=H_size; a++)
		{
			printf("%d",H[a]);
			if(a != H_size) printf(",");
			else printf("\n\n");
		}
	}

	printf("\n\n\n�\�[�g����{");
	for(a=0; a<10; a++)
	{
		printf("%d",S[a]);
		if(a != 9) printf(",");
	}
	printf("}\n\n");
	
	return 0;
}

void push_heap(int H[], int x)
{
	H_size = H_size + 1;
	H[H_size] = x;
	k = H_size;

	printf("%d ",H[H_size]);
	printf("���q�[�v�ɒǉ���  ");

	while( (H[k]>H[k/2]) && (k>1))
	{
		swap(&H[k],&H[k/2]);
		k = k/2;
	}

	for(int a = 1; a<=H_size; a++)
	{
		printf("%d",H[a]);
		if(a != H_size) printf(",");
	}

	printf("\n\n");
}

int delete_maximum(int H[], int S[])
{
	S[m] = H[1];
	m++;
	H[1] = H[H_size];
	H_size = H_size - 1;
	
	k = 1;
	while( 2*k <= H_size )
	{
		if( 2*k == H_size )
		{
			if(H[k] < H[2*k])
			{
				swap(&H[k],&H[2*k]);
				k = 2*k;
			}
			else return -1;
		}   
		else
		{
			if(H[2*k]>H[2*k+1]) big = 2*k;
			else big = 2*k+1;

			if(H[k] < H[big])
			{
				swap(&H[k],&H[big]);
				k = big;
			}
			else return -1;
		}
	}
}

void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}