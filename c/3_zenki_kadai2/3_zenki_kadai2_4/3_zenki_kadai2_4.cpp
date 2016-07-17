#include<stdio.h>
#define N 10

void enqueue(int[], int);
void dequeue(int[]);

void initialize(int[]);
void is_empty(int[]);

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

	initialize(Q);
	is_empty(Q);

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

void initialize(int Q[])
{
	right = left = 0;
	printf("\n(初期化)\tright = %d left = %d\n",right,left);
}

void is_empty(int Q[])
{
	if(right == 0 && left == 0)
		printf("\nキューQは空です．\n");

	else 
		printf("\nキューQは空ではありません．\n");
}