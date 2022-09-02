#include "monty.h"

/**
 * main - the main function to the monty program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv)
{
	int fd;
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	if (argc == 1 || argc > 2)
	{
		printf("USAGE: monty file");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error: Can't oen file %s", argv[1]);
		return (EXIT_FAILURE);
	}
}
