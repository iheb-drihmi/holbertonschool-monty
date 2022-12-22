#include"monty.h"
/**
 * pop - removes the top elements of the stack
 * @stack: pointer to top of the stack
 * @line_number: number of the current line
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	pop_previous(stack);
}
