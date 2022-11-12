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
		free(inventory->line);
		free_all();
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(inventory->line);
		free_all();
		exit(EXIT_FAILURE);
	}

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	*head = new;
}
