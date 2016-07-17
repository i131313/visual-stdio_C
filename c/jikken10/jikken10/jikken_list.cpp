#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	char *date;
	struct node *next;

}Node;

Node *head = NULL;
int node_num = 0;

void append_node(char *);
void delete_node(int);
void insert_node(int, char *);
void print_list(void);
void check_list(void);
Node *get_node(int);

char test[5][20] = {"Korosuke", "Benzou", "Tongari", "Kiteretsu", "Butagorira"};

int main(void)
{
	append_node(test[0]);
	append_node(test[1]);
	append_node(test[2]);
	print_list();

	insert_node(1, test[3]);
	print_list();

	delete_node(2);
	print_list();

	check_list();
	return 0;
}

void append_node(char *date)
{
	Node *new_node;
	Node *p;

	if(head == NULL)
	{
		new_node = (Node *)malloc(sizeof(Node));
		new_node -> date = date;
		new_node -> next = NULL;
		head = new_node;
		node_num ++;
	}
	else
	{
		for(p = head; p -> next != NULL; p = p -> next);
		new_node = (Node *)malloc(sizeof(Node));
		new_node -> date = date;
		new_node -> next = NULL;
		p -> next = new_node;
		node_num++;
	}
}

void insert_node(int loc, char *date)
{
	Node *new_node;
	Node *prev;

	if(loc >= node_num || loc < 0)return;

	if(loc == 0)
	{
		new_node = (Node *)malloc(sizeof(Node));
		new_node -> date = date;
		new_node -> next = head;
		head = new_node;
		node_num++;
	}
	else
	{
		prev = get_node(loc-1);
		new_node = (Node *)malloc(sizeof(Node));

		new_node -> date = date;
		new_node -> next = prev -> next;
		prev -> next = new_node;
		node_num++;
	}
}

void delete_node(int loc)
{
	Node *prev;
	Node *p;

	if(node_num == 0)return;
	if(loc >= node_num || loc < 0)return;

	if(loc == 0)
	{
		p = head;
		head = p -> next;
		free(p);
		node_num--;
	}
	else
	{
		prev = get_node(loc-1);
		p = get_node(loc);
		prev -> next = p -> next;
		free(p);
		node_num--;

	}
}

Node *get_node(int loc)
{
	Node *p;
	int count = 0;
	for(p = head; count < loc; p = p -> next) count++;
	return p;
}

void print_list(void)
{
	Node *p;
	int count = 0;
	for(p = head; p != NULL; p = p -> next)
	{
		printf("%3d:  %s\n",count, p ->date);
		count++;
	}
	printf("\n");
}

void check_list(void)
{
	Node *p;
	int count = 0;
	printf("Header : %u\n", head);
	for(p = head; p != NULL; p = p -> next)
	{
		printf("%3d:(Address  = %8u     Next = %8u)    %s\n",count, p, p -> next, p -> date);
		count++;
	}
	printf("\n");
}