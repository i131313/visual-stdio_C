#include <stdio.h>
void func(void);
void main (void)
{
	int i=0;
	func();
	printf("main�֐�����i�̒l�c%d\n",i);
}

void func(void)
{
	int i=1;
	printf("func�֐�����i�̒l�c%d\n",i);
}
