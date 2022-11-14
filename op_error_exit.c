#include "monty.h"

/**
 * op_error_exit - exits program on op error
 */
void op_error_exit(void)
{
	free(inventory->line);
	free_all();
	exit(EXIT_FAILURE);
}
