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

	buffer = readln(fd);
	if (!buffer)
		return (EXIT_SUCCESS);

	inventory->code = NULL;
	inventory->n = NULL;

	parseln(buffer);

	if (!inventory->code)
	{
		line_number++;
		return (execute(fd, line_number));
	}

	func = get_op_func(inventory->code);
	if (!func)
	{
		fprintf(stderr, "Error: no matching function\n");
		return (EXIT_FAILURE);
	}

	func(&inventory->stack, line_number);

	line_number++;
	return (execute(fd, line_number));
}
