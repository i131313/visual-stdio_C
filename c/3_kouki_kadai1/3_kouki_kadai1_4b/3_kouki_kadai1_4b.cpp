#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

int quicksort(int[], int, int);
int partition(int[], int, int);
void swap(int *,int *);

int i,j,k;

int t;
int n;

int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};

	srand(time(NULL));

	printf("�N�C�b�N�\�[�g���J�n���܂�\n");
	printf("�������  {");
	for(int a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");
	
	quicksort(data,0,N-1);

	printf("\n�\�[�g����  {");
	for(int a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");
	return 0;
}

int quicksort(int data[], int left, int right)
{
	int pivot_index;

	if(left >= right) return -1;
	pivot_index = partition(data, left, right);

	if(left < pivot_index-1)
	{
		printf("%d��荶���i%d����%d�܂Łj���\�[�g���܂�\n",data[pivot_index],data[left],data[pivot_index-1]);
		quicksort(data, left, pivot_index - 1 );
	}

	if(right > pivot_index+1)
	{
		printf("%d���E���i%d����%d�܂Łj���\�[�g���܂�\n",data[pivot_index],data[pivot_index+1],data[right]);
		quicksort(data, pivot_index+1 , right);
	}
}

int partition(int data[], int left, int right)
{	
	n++;
	do
	{
		t = rand()%right;
	}while((t<left) || (t>right)); //��l�ƂȂ�f�[�^data[k]��I��
	k = t;
	
	swap(&data[k], &data[right]);
	i = left; 
	j = right - 1;
	while(i <= j)
	{
		while(data[i] < data[right]) { i++; }
		while((data[j] >= data[right]) && (j >= i) ) { j--; }
		if((i < j)) swap(&data[i], &data[j]);
	}
	 swap(&data[i], &data[right]);

	printf("%d. ��l��%d�Ƃ���",n,data[i]);
	printf("�������l������,",data[i]);
	printf("�傫���l���E���ɂ��܂�\n",data[i]);
	printf("  {");
	for(int a=left; a<=right; a++)
	{
		printf("%d",data[a]);
		if(a != right) printf(",");
	}
	printf("}\n\n");

	//printf("��l�F%d   pivot_index�F%d\n\n",data[i],i);
	return i;
}

void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}