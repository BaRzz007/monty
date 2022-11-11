#include "monty.h"

/**
 * main - the main function to the monty program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, const char *argv[])
{
	/*stack_t **current, *temp;*/
	unsigned int line_count;
	int fd;

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

	if (build_inventory() == EXIT_FAILURE)
		return (EXIT_FAILURE);

	line_count = 1;
	if (execute(fd, line_count) == EXIT_FAILURE)
	{
		free_all();
		return (EXIT_FAILURE);
	}

	free_all();
	return (EXIT_SUCCESS);
}
