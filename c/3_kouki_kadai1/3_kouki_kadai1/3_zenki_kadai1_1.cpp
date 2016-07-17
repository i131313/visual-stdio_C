#include<stdio.h>
#define N 10
void swap(int *,int *);
int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};
	int max, max_index;
	int i,j,a;

	printf("‰Šúó‘Ô    {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");

	printf("[¸‡‚Éƒ\[ƒg‚µ‚Ü‚·]\n\n");

	for(i=N-1; i>0; i=i-1)
	{
		max = data[0]; max_index = 0;
		for(j=1;j<=i; j=j+1)
		{
			if(data[j]>=max) 
			{
				max = data[j]; 
				max_index = j;
			}
		}
		swap(&data[max_index],&data[i]);


	}
	printf("{");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");
	return 0;
}

void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}