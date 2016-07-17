#include <stdio.h>
void func(void);
void main (void)
{
	int i=0;
	func();
	printf("main関数内のiの値…%d\n",i);
}

void func(void)
{
	int i=1;
	printf("func関数内のiの値…%d\n",i);
}
