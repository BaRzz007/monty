#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the head of a stack
 * @line_number: line_number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		op_error_exit();
	}

	printf("%d\n", current->n);
}
