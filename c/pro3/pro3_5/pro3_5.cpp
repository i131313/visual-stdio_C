#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int a, b, i;

	srand(time(NULL));
	b = rand()%10+1;
	//printf("%d\n",b);
	
	for( i=1; i<=5; i++)
	{
		printf("1`10‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢D„ ");
		scanf("%d",&a);
		if( a == b )
		{
			printf("%d‰ñ–Ú‚Å“–‚½‚è‚Å‚·I\n",i);
			break;
		}
		if( i == 5)
		{
			printf("³‰ð‚Í%d‚Å‚·D\n",b);
		}
		
	}
	return 0;
}