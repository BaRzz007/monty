#include "monty.h"

/**
 * pall - prints all the value on the stack starting from the top stack
 * @head: pointer to head pointer
 * @line_number: line_number
 */
void pall(stack_t **head, unsigned int line_number)
{
	(void)head;
	printf("line %d: Done pall\n", line_number);
}

/**
 * push - push a node to the stack
 * @head: pointer to head pointer
 * @line_number: line number
 */
void push(stack_t **head, unsigned int line_number)
{
	(void)head;
	printf("line %d: Done push %s\n", line_number, inventory->n);
	/*stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return(NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	*head = new;*/
}
