#include"monty.h"
/**
 * swap - swaps the top 2 element of the stack
 * @stack: a pointer
 * @line_number: number of the current line
 */
void swap(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swap_previous(*stack);
}
