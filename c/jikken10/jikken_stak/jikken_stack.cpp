#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int sp = STACK_SIZE;

char eqn[256] = "2 9 7 - +";

void push(int v);
int pop(void);

int main(void)
{
	int i,n,x,y;
	char *token;

	token = strtok(eqn," ");

	while(token != NULL)
	{
		if(strlen(token) == 1)
		{
			if(isdigit(token[0]))
			{
				n = atoi(token);
				push(n);
			}
			else
			{
				switch(token[0])
				{
				case '+':
					push(pop() + pop());
					break;

				case '-':
					push(-(pop() - pop()));
					break;

				default:
					fprintf(stderr, "error\n");
					exit(1);
				}
			}
		}

		if(strlen(token) >= 2)
		{
			for(i = 0; i < strlen(token); i++)
			{
				if(!isdigit(token[i]))
				{
					fprintf(stderr, "”Ž®‚ª•s³‚Å‚·\n");
					exit(i);
				}
			}
			
			push(atoi(token));
		}

		token = strtok(NULL, " ");
	}

	printf("ans = %d\n", pop());
	return 0;
}

void push(int v)
{
	sp--;
	stack[sp] = v;
}

int pop(void)
{
	int a;
	a = sp;
	sp++;
	return stack[a];
}