#include<stdio.h>
#define N 10

void enqueue(int[], int);
void dequeue(int[]);

int right = 0;
int left = 0;


int main(void)
{
	int Q[N];

	enqueue(Q,1);
	enqueue(Q,3);
	dequeue(Q);
	enqueue(Q,4);
	dequeue(Q);
	enqueue(Q,7);
	enqueue(Q,6);
	dequeue(Q);

	printf("\n");
	return 0;
}

void enqueue(int Q[], int x)
{
	Q[right] = x;
	printf("enqueue : %d",Q[right]);
	right += 1;
	if(right == N) right = 0;
	if(left == right)
		printf("オーバーフロー\n");
	printf("\tright = %d  left = %d\n", right,left);
}

void dequeue(int Q[])
{
	if(left == right)
		printf("アンダーフロー");
	else{
		printf("dequeue :   %d",Q[left]);
		left += 1;
		if(left == N) left = 0;
		printf("\tright = %d  left = %d\n",right,left);
	}
}