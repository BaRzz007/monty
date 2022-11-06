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
	stack_t *stack;

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

	line_count = 0;
	if (execute(stack, fd, line_count) == EXIT_SUCCESS)
	{
		close(fd);
		return (EXIT_SUCCESS);
	}

	return (EXIT_FAILURE);
}
