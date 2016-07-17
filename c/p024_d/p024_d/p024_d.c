#include<stdio.h>
int main(void)
{
	int i;
	long acc;

	acc=1;
	for(i=1;i<=10;i++){
		acc=acc*i;
	}
	printf("1~2~3~c~10=%d\n",acc);
	return(0);
}