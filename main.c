#include "monty.h"

/**
 * main - the main function to the monty program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, const char *argv[])
{
	unsigned int line_count;
	int fd;
	char *buffer;
	stack_t *stack, **head;
	void (*func)(stack_t **, unsigned int);

	if (argc == 1 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	stack = malloc(sizeof(stack_t));
	if (!stack)
		return (EXIT_FAILURE);
	head = &stack;

	line_count = 0;
	while (1)
	{
		buffer = readln(fd);
		if (!buffer)
			break;

		inventory = NULL;
		if(build_inventory() == EXIT_FAILURE)
			return (EXIT_FAILURE);

		parseln(buffer);

		if (!inventory->code)
		{
			line_count++;
			continue;
		}

		printf("%s\n", inventory->code);
		func = get_op_func(inventory->code);
		if (!func)
		{
			fprintf(stderr, "ERROR: no matching function\n");
			return (EXIT_FAILURE);
		}
		func(head, line_count);

		line_count++;

	}
	close(fd);
	return (EXIT_SUCCESS);
}
