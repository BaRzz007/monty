#include "monty.h"

/**
 * push - push a node to the stack
 * @head: pointer to head pointer
 * @line_number: line number
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (!new)
		exit(EXIT_FAILURE);

	new->prev = NULL;
	new->next = *head;
	new->n = to_int(inventory->n);

	*head = new;
}
