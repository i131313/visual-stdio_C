#include<stdio.h>
void sankaku(int);
int main(void)
{
    sankaku(2);
	sankaku(3);
	sankaku(4);
	sankaku(5);
	
	return 0;
}

void sankaku(int M)
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}