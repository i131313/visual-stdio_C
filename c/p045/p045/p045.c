#include <stdio.h>
void func(void);

int i=0;

void main (void)
{
	i=1;
	func();
	printf("main�֐�����i�̒l�c%d\n",i);
}

void func(void)
{
	printf("func�֐�����i�̒l�c%d\n",i);
	i=2;
}
