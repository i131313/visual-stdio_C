#include<stdio.h>
int main(void)
{
	int a = 10;
	int *p;

	p = &a;

	printf("a�̃A�h���X�F%p\n",&a);
	printf("p�̒l      �F%p\n",p);

	return 0;
}