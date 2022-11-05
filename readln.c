#include "monty.h"
int n = 0;
/**
 * readln - reads a line from a file
 * @fd: file descriptor
 * Return: one line from file
 */
char *readln(int fd)
{
	char buf, *buffer;
	const char *to_int;
	int flag, n_read;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		return (NULL);
	}

	flag = 0;
	n_read = 1;
	while (n_read > 0)
	{
		n_read = read(fd, &buf, 1);
		if (buf == '\n')
			return (buffer);

		if (buf != ' ' && flag == 0)
			flag++;
		if (buf == ' ' && flag == 1)
			flag++;
		else if (buf == ' ')
			continue;

		if (buf >= '0' && buf <= '9' && flag == 2)
		{
			to_int = &buf;
			n = atoi(to_int);
			continue;
		}

		if (flag == 2)
			continue;
		strcat(buffer, &buf);
	}
	return (NULL);
}
