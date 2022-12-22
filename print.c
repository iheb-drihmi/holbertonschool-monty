#include "monty.h"
/**
 * print- a function that prints all the elements
 * @kao: the list
 * Return: return
 */
size_t print(const stack_t *kao)
{
	size_t i = 0;

	while (kao)
	{
		if (&kao->n != NULL)
			printf("%d\n", kao->n);
		kao = kao->next;
		i++;
	}
	return (i);
}
