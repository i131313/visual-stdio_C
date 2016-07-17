#include<stdio.h>

typedef struct car
{
	int number;
	double gas;
	char name[100];
}Car;

int main(void)
{
	printf("int型のサイズは%dバイトです.\n", sizeof(int));
	printf("double型のサイズは%dバイトです.\n", sizeof(double));
	printf("Car型のサイズは%dバイトです.\n", sizeof(Car));
	printf("Car*型のサイズは%dバイトです.\n", sizeof(Car*));

	return 0;
}