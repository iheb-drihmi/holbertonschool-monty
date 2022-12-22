#include "monty.h"
/**
  * pall -  prints all the values on the stack
 * @stack: pointer to the top of the stack
 * @line_number: number of the current line
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	print(*stack);
}

