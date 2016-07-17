#include<stdio.h>
#include<stdlib.h>

typedef struct _record 
{
	int data;
	struct _record *next;
} RECORD;

RECORD *head = NULL;

void add(int x)
{
	RECORD *p = (RECORD*) malloc(sizeof(RECORD) * 1);

	p -> data = x;
	p -> next = head;
	head = p;
}

void del(void)
{
	RECORD *p;
	if(head == NULL)
		printf("削除するデータはありません\n");
	else
	{
		p = head ;
		head = p -> next;
		free(p);
	}
}

void print_all(void)
{
	RECORD *p = head;
	int i = 1;

	if(head == NULL)
	{
		printf("no noda.\n");
		return;
	}

	printf("[head addr: %p]\n",head);

	do
	{
		printf("[pos:%2d   data:%2d   addr: %p   next:%p]\n",i++,p->data,p,p->next);
		p = p -> next;
	}while(p != NULL);

}

void initialize()
{
	head = NULL;
}

void is_empty()
{
	if(head == NULL)
		printf("リストは空です\n");
	else
		printf("リストは空ではありません\n");
}

void add_last(int x)
{
	RECORD *p = (RECORD*) malloc(sizeof(RECORD) * 1);


	p -> data = x;
	p -> next = head;
	head = p;

}

void del_last(int x)
{

}

int main(void)
{
	int i;

	add(5);
	add(4);
	add(0);
	add(2); 
	del();
	del();

	initialize();  //開放はしなくていいのか？

	print_all();  

	is_empty();

	printf("\n");
	return 0;
}


