#include<stdio.h>
#define N 10

int main(void)
{
	int x[] = {2,2,2,2,2,2,2,2,2,2}; //�ő�{2,2,2,2,2,2,2,2,2,2}
	int i,j;

	for(i = 0; i < N-1; i++){ // N
		for(j = i+1; j < N; j++){ //N + (N-1) + (N-2) + ... + (3) + (2) = ���in-i�j
			if(x[i] == x[j]) { printf("x[%d] �� x[%d] �͓����ł���B\n", i, j ); }
		} //N-j  N-j,0
		printf("\n");
	}

	return 0;
}