#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i;
	int a;

	/* RAND_MAX‚ÌŠm”F */
	//printf("%d\n",RAND_MAX);

	/* —”‚Ìseed‚ğ—^‚¦‚é */
	srand(time(NULL));

	/* —”‚ğ5‰ñ¶¬‚·‚é */
	for(i=0;i<10;i++)
	{
		a = rand()%4;
		if(a==0)      printf("ã\n");
		else if(a==1) printf("‰E\n");
		else if(a==2) printf("‰º\n");
		else if(a==3) printf("¶\n");
	}

	return 0;
}