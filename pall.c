#include "monty.h"

/**
 * pall - prints all the value on the stack starting from the top stack
 * @head: pointer to head pointer
 * @line_number: line_number
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *head;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
