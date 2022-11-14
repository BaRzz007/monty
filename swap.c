#include "monty.h"

/**
 * swap - swap the 2 top elements of the stack
 * @stack: stack
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		op_error_exit();
	}

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}
