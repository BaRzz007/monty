#include "monty.h"

/**
 * readln - reads a line from a file
 * @fd: file descriptor
 * Return: one line from file
 */
char *readln(int fd)
{
	char buf, *buffer;
	int n;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		return (NULL);
	}

	n = 1;
	while (n > 0)
	{
		n = read(fd, &buf, 1);
		if (buf == '\n')
			return (buffer);
		strcat(buffer, &buf);
	}
	return (NULL);
}
