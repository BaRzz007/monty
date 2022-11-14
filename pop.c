#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @head: stack head
 * @line_number: line number
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (!(*head))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		op_error_exit();
	}

	temp = *head;
	*head = (*head)->next;
	free(temp);
}
