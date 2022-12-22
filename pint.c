#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: number of the current line
 * Return: 0
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)

	{
		
		printf("L%d: can't pint, stack empty\n", line_number);
		return;
	}
	printf("%d\n", (*stack)->n);
}

