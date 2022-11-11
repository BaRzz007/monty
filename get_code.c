#include "monty.h"

/**
 * readln - reads a line from a file
 * @fd: file descriptor
 * Return: one line from file
 */
char *readln(int fd)
{
	char buf, *buffer;
	int n_read;

	buf = '\0';

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		return (NULL);
	}
	buffer[0] = '\0';

	n_read = 1;
	while (n_read > 0)
	{
		n_read = read(fd, &buf, 1);
		if (buf == '\n')
			return (buffer);

		strncat(buffer, &buf, 1);
	}

	free(buffer);
	return (NULL);
}

/**
 * parseln - Gets opcode and data from line
 * @line: line
 * Return: inventory
 */
int parseln(char *line)
{
	char *delim;

	delim = "\n ";
	inventory->code = strtok(line, delim);
	inventory->n = strtok(NULL, delim);

	return (EXIT_SUCCESS);
}
