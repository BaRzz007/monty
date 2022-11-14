#include "monty.h"

/**
 * push - push a node to the stack
 * @head: pointer to head pointer
 * @line_number: line number
 */
void push(stack_t **head, unsigned int line_number)
{
	int n;
	stack_t *new;
	(void)line_number;

	n = to_int(inventory->n);
	if (n == 'a')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		op_error_exit();
	}

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		op_error_exit();
	}

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	if (!(*head))
		inventory->tail = new;
	*head = new;
}
