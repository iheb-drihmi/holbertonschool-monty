#include"monty.h"
/**
 * pop_previous - delete previous node
 * @kao: double linked list
 *Return: return
 */
void pop_previous(stack_t **ptr)
{
	stack_t *first = (*ptr);

	*ptr = first->next;
	if (*ptr)
		(*ptr)->prev = NULL;
	free(first);
}
