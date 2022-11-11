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

	inventory->stack = NULL;
	inventory->n = NULL;
	return (EXIT_SUCCESS);
}
