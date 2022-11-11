#include "monty.h"

/**
 * to_int - converts push arguments to integer
 * @n: argument to be checked and converted
 *
 * Return: converted integer or -1 on failure
 */
int to_int(char *n)
{
	int num, i;

	if (n == NULL)
		return (-1);
	for (i = 0; n[i] != '\0'; i++)
	{
		if (isdigit(n[i]) == 0)
		{
			return (-1);
		}
	}
	num = atoi(n);

	return (num);
}
