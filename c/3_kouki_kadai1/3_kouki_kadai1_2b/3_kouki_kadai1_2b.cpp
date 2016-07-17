#include<stdio.h>
#define N 10
int main(void)
{
	int data[N] = {42,33,78,19,46,63,25,11,54,17};
	int i,j,k,x,a;

	printf("初期状態    {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");
	printf("[昇順にソートします]\n");
	printf("%dを仮にソート済みとする\n\n",data[0]);


	for(i=1; i<N; i++)
	{
		x = data[i];
		j = i;
		k = 0;

		printf("未ソートデータの先頭要素%dをとり，\n",x);
		printf("%dより小さい要素に出会うまで1つ左側の要素を代入する\n",x);

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
			printf("適切な場所に%dを挿入する\n",x);
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
			printf("\n%dより小さい要素がなかったためこのまま\n",x);
			printf("{");
			for(a=0; a<10; a++)
			{
				printf("%d",data[a]);
				if(a != 9) printf(",");
			}
			printf("}\n\n\n");
		}
	}

	printf("\nソート結果  {");
	for(a=0; a<N; a++)
	{
		printf("%d",data[a]);
		if(a != N-1) printf(",");
	}
	printf("}\n\n");


	return 0;
}