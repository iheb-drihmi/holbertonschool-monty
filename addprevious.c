#include "monty.h"
/**
 * add_previous - add previous 2 nodes
 * @ptr: double linked list
 *Return: return
 */
void add_previous(stack_t **ptr)
{
	stack_t *first = *ptr;
	stack_t *second = (*ptr)->next;

	second->n = first->n + second->n;
	second->prev = NULL;
	*ptr = second;
	free(first);
}
