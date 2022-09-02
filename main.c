#include "monty.h"

/**
 * main - the main function to the monty program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv)
{
	if (argc == 1 || argc > 2)
	{
		printf("USAGE: monty file");
		return (EXIT_FAILURE);
	}
}
