#include "monty.h"

/**
 * get_op_func - Get operation function
 * @str: String representing the operation to select
 * Return: op function
 */
void (*get_op_func(char *str))(stack_t **, unsigned int)
{
	int i;

	instruction_t func[] = {
		{"push", push}, {"pint", pint}, {"swap", swap},
		{"pall", pall}, {"pop", pop},
		{NULL, NULL}
	};

	i = 0;
	while (func[i].opcode)
	{
		if (strcmp(str, func[i].opcode) == 0)
		{
			return (func[i].f);
		}
		i++;
	}

	return (func[i].f);
}
