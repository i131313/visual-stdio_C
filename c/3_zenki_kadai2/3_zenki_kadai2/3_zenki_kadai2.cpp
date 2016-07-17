#include<stdio.h>
#define N 10

void push(int[], int);
void pop(int[]);

int top = -1;

int main(void)
{
	int S[N];

	printf("(初期状態)\ttop = %d\n\n",top);
	push(S,1);
	push(S,3);
	pop(S);
	push(S,4);
	pop(S);
	pop(S);
	pop(S);

	printf("\n");

	return 0;
}

void push(int S[], int x )
{
	top = top + 1;
	if(top == N)
		printf("オーバーフロー top = %d\n",top);

	else 
	{
		S[top] = x;
		printf("push: %d\t\ttop = %d\n",x,top);
	}
}

void pop(int S[])
{
	if(top == -1)
		printf("アンダーフロー  top = %d\n",top);

	else
	{
		printf("pop:    %d",S[top]);
		top = top - 1;
		printf("\ttop = %d\n",top);
	}
}

