#include<stdio.h>
#include<math.h>
#define N 10

int main(void)
{
	int B[] = {1,0,0,1,0,1,0,1,1,1};
	int i;
	int j = 0;
	int a = 0;

	for(i = N-1; i >= 0; i--)
	{
		if(B[j] == 1)
		{
			a = a + pow((double)2, i);
		}
		j++;
	}
    printf("2進数 1001010111 を10進数に変換すると %d となる\n\n",a);

	return 0;
}