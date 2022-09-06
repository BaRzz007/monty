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
	/*instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};*/

	if (argc == 1 || argc > 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}


	while (1)
	{
		buffer = readln(fd);
		if (!buffer)
			break;
		printf("debug main: <---print buffer--->\n");
		printf("%s\n", buffer);
		printf("Executed\n");

	}
	close(fd);
	return (0);
}
