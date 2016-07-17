#include<stdio.h>
#define N 10

int main(void)
{
	int x[] = {1,3,5,2,6,7,4,9,2,10};
	int max;
	int i;

	max = x[0];   // 1
	for(i = 1; i < N; i++ ){ // N
		if(max < x[i]) { max = x[i]; } // N-1 0(N-1) 
	}
	
	printf("Å‘å’l‚Í %d ‚Å‚·B\n", max);

	return 0;
}