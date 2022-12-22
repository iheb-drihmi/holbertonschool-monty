#include "monty.h"
/**
 * swap_previous - a function that swap 2 nodes
 * @ptr: double linked list
 *Return: return
 */
void swap_previous(stack_t *ptr)
{
	stack_t *first = ptr;
	stack_t *second = ptr->next;
	int tmp;

	tmp = first->n;
	first->n = second->n;
	second->n = tmp;
}
