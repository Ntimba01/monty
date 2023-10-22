#include "monty.h"

/*
 
 * f_pchar - prints the char at the top of the stack
 * f_pall - prints stack
 * @head: stack
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
