#include<stdio.h>
#include<malloc.h>
int main(void)
{
	for(;;)
		malloc(sizeof(double) * 100);
}