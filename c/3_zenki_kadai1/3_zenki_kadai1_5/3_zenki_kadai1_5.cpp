#include<stdio.h>
#define N 10

int main(void)
{
	int x[] = {1,8,3,9,-4,5,7,-6,2,-8};
	int s,t,u;
	int i,j,k;

	for(s = 0; s < N-1; s++)
	{
		for(t = s+1; t < N; t++)
		{
			for(u = 0; u < N; u++)
			{
				if(x[s] + x[t] == x[u] && s < t && s != u && s != u)
				{
					i = x[s];
					j = x[t];
					k = x[u];
					printf("(%d,%d,%d) \n", i,j,k);
				}
			}
		}
	}
	return 0;
}