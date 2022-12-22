#include "monty.h"
/**
 *add - adds the top two elements of the stack
 *@stack: pointer to the top of the stack
 *@line_number: number of the current line
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	add_previous(stack);
}
