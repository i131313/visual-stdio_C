#include<stdio.h>

typedef struct car
{
	int number;
	double gas;
	char name[100];
	struct car *next;
}Car;

int main(void)
{
	Car car0 = {1234, 25.5, "BMW", NULL};
	Car car1 = {4567, 52.5, "VOLVO", NULL};
	Car car2 = {7890, 20.1, "DEMIO", NULL};
	Car *pcar;

	car0.next = &car1;
	car1.next = &car2;
	car2.next = NULL;

	for(pcar = &car0; pcar != NULL; pcar = pcar->next)
	{
		printf("number: %d, gas: %f, name: %s\n", pcar->number, pcar->gas, pcar->name);
	}

}