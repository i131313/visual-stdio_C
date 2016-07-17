#include<stdio.h>
int main(void)
{
	int i;

	for(i=32;i<128;i++){
		if(i%8==0){
			printf("\n");
		}
		printf(" %5x %c",i,i);
	}
}