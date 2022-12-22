#include"monty.h"
/**
 * print_previous - a function that prints the top element
 * @kao: list
 *Return: return
 */
void print_previous(const stack_t *kao)
{

	if (&kao->n != NULL)
		printf("%d\n", kao->n);
}

