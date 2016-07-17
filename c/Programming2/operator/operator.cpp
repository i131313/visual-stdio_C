#include<stdio.h.>
int main (void)
{
	int a, b;
	int c[2] = {0, 1};

	a = 0;
	printf("a++ = %d\n", a++);

	a = 0;
	printf("++a = %d\n", ++a);
	
	b = 0;
	a = b++;
	printf("a = %d\n", a);

	b = 0;
	a = ++b;
	printf("a = %d\n", a);

	b = 0;
	printf("c[b++] = %d\n", c[b++]);

	b = 0;
	printf("c[++b] = %d\n", c[++b]);

	return 0;

}