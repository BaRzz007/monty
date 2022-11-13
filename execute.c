#include "monty.h"

/**
 * execute - execute line code recursively
 * @fd: file descriptor
 * @line_number: line number
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int execute(int fd, unsigned int line_number)
{
	char *buffer;
	void (*func)(stack_t **, unsigned int);

	/*inventory->code = NULL;
	inventory->n = NULL;*/

	buffer = readln(fd);
	if (!buffer)
	{
		free(buffer);
		return (EXIT_SUCCESS);
	}

	inventory->code = NULL;
	inventory->n = NULL;

	parseln(buffer);

	if (!inventory->code)
	{
		line_number++;
		free(buffer);
		return (execute(fd, line_number));
	}


	/* printf("%s\n", inventory->code); */
	func = get_op_func(inventory->code);
	if (!func)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n",
				line_number, inventory->code);
		free(buffer);
		return (EXIT_FAILURE);
	}

	inventory->line = buffer;
	func(&inventory->stack, line_number++);

	free(buffer);
	return (execute(fd, line_number++));
}
