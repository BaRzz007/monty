#include "monty.h"

/**
 * _push - inner function
 * @head: pointer to head pointer
 * @n: stack data
 * Return: address to newly inserted node
 */
int *_push(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;

	*head = new;

	return (new);
}
