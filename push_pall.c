#include "monty.h"

/**
 * pall - prints all the value on the stack starting from the top stack
 * @head: pointer to head pointer
 * @line_number: line_number
 */
void pall(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	printf("Done pall\n");
}

/**
 * push - push a node to the stack
 * @head: pointer to head pointer
 * @line_number: line number
 */
void push(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	printf("Done push %d\n", n);
	/*stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return(NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	*head = new;*/
}
