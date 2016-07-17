#include<stdio.h>
#define N 10
int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};
	int i,j,x,a;

	printf("初期状態    {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");

	printf("[昇順にソートします]\n\n");

	for(i=1; i<N; i++)
	{
		x = data[i];
		j = i;

		while((data[j-1]>x) && (j>0))
		{
			data[j] = data[j-1];
			j = j-1;
		}
		data[j] = x;
	}

	printf("ソート結果  {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");


	return 0;
}