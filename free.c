#include "monty.h"
/**
 * free_dlistint - free a double linked list
 * @ptr: double linked list
 *Return: return
 */
void free_dlist(stack_t *ptr)
{
	stack_t *word = NULL;

	while (ptr)
	{
		word = ptr->next;
		free(ptr);
		ptr = word;
	}
}
