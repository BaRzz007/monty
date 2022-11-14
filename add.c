#include "monty.h"

/**
 * add - adds the 2 top elements of a stack
 * @stack: stack
 * @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		op_error_exit();
	}

	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}
