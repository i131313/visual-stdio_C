#include<stdio.h>

typedef struct car
{
	int number;
	double gas;
	char name[100];
}Car;

int main(void)
{
	printf("int�^�̃T�C�Y��%d�o�C�g�ł�.\n", sizeof(int));
	printf("double�^�̃T�C�Y��%d�o�C�g�ł�.\n", sizeof(double));
	printf("Car�^�̃T�C�Y��%d�o�C�g�ł�.\n", sizeof(Car));
	printf("Car*�^�̃T�C�Y��%d�o�C�g�ł�.\n", sizeof(Car*));

	return 0;
}