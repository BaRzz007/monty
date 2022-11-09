#include "monty.h"

/**
 * build_inventory - bulids inventory for each line
 * Return: inventory, NULL if malloc fails
 */
int build_inventory(void)
{

	inventory = malloc(sizeof(inventory_t));
	if (!inventory)
	{
		fprintf(stderr, "Inventory build error message");
		return (EXIT_FAILURE);
	}

	inventory->stack = malloc(sizeof(stack_t));
	if (!inventory->stack)
	{
		fprintf(stderr, "Stack malloc error message");
		free(inventory);
		return (EXIT_FAILURE);
	}

	inventory->stack = NULL;
	inventory->code = NULL;
	inventory->n = NULL;
	return (EXIT_SUCCESS);
}
