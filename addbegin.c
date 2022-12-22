#include"monty.h"
/**
 * add_begin - a function that add a new node
 * @ptr: linked list
 * @n: integer
 * Return: return
 */
stack_t *add_begin(stack_t **ptr, const int n)
{
	stack_t *ret = NULL;

	ret = malloc(sizeof(stack_t));
	if (!ret)
		return (NULL);
	ret->n = n;
	ret->next = *ptr;
	if (*ptr != NULL)
		(*ptr)->prev = ret;
	ret->prev = NULL;
	*ptr = ret;
	return (ret);
}
