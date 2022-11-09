#include "monty.h"

/**
 * to_int - converts push arguments to integer
 * @n: argument to be checked and converted
 *
 * Return: converted integer or EXIT_FAILURE
 */
int to_int(char *n)
{
	int num;

	num = atoi(n);

	return (num);
}
