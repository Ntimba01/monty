#include "monty.h"

/*
 * main - monty code interpreter
* free_stack - a doubly linked list
* @head: head of the stack
* @argc: number of arguments
* @argv: monty file location
* return: 0 success
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
