#include<stdio.h>
int main(void)
{
	int c;

	c=getchar();
	
	if('A'<=c && c<='Z'){
		c=c-('A'-'a');
	}
	putchar(c);

}