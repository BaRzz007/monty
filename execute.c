#include "monty.h"

/**
 * execute - execute line code
 * @fd: file descriptor
 * @line_number: line number
 * @stack: pointer to stack
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int execute(stack_t *stack, int fd, unsigned int line_number)
{
	char *buffer;
	void (*func)(stack_t **, unsigned int);
	stack_t **head;

	buffer = readln(fd);
	if (!buffer)
		return (EXIT_SUCCESS);

	inventory = NULL;
	if (build_inventory() == EXIT_FAILURE)
		return (EXIT_FAILURE);

	parseln(buffer);

	if (!inventory->code)
	{
		line_number++;
		return (execute(stack, fd, line_number));
	}

	printf("%s\n", inventory->code);
	func = get_op_func(inventory->code);
	if (!func)
	{
		fprintf(stderr, "Error: no matching function\n");
		return (EXIT_FAILURE);
	}

	head = &stack;
	func(head, line_number);

	line_number++;
	return (execute(stack, fd, line_number));
}
