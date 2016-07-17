#include<stdio.h>
#include<stdlib.h>

typedef struct car
{
	int number;
	double gas;
	char name[100];
	struct car *next;
}Car;

int main(void)
{
	Car *head = NULL;
	Car *pcar;

	head = (Car *)malloc(sizeof(Car));
	head -> next = (Car *)malloc(sizeof(Car));
	head -> next -> next =  (Car *)malloc(sizeof(Car));
	head -> next -> next -> next = NULL;

	pcar = head;

	do{
		printf("number? >"); scanf("%d", &pcar -> number);
		printf("gas? >"); scanf("%lf", &pcar -> gas);
		printf("name? >"); scanf("%s", &pcar -> name);
		pcar = pcar -> next;
	}while(pcar != NULL);


	for(pcar = head; pcar != NULL; pcar = pcar->next)
	{
		printf("number: %d, gas: %f, name: %s\n", pcar->number, pcar->gas, pcar->name);
	}

}