#include "monty.h"

/**
 * free_all - free all allocated memory
 */
void free_all(void)
{
	free_stack();
	free_inventory();
}

/**
 * free_stack - free stack
 */
void free_stack(void)
{
	stack_t **current, *temp;

	current = &inventory->stack;
	while (*current)
	{
		temp = *current;
		*current = (*current)->next;
		free(temp);
	}
}

/**
 * free_inventory - free inventory
 */
void free_inventory(void)
{
	free(inventory);
}
