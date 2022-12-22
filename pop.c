#include"monty.h"
/**
 * pop - removes the top elements of the stack
 * @stack: pointer to top of the stack
 * @line_number: number of the current line
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *koa = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		
		return;
	}
	koa = *stack;
	*stack = koa->next;
	if (koa->next)
	{
		koa->next->prev = NULL;
	}
	free(koa);
}
