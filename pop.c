#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: stack
 * @line_number: line number
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (!(*head))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(inventory->line);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	free(temp);
}
