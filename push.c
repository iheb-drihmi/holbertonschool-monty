#include "monty.h"
/**
 * push - adds a new node at the stack
 * @stack: pointer to the top of the stack
 * @line_number: number of the current line
 * Return: 0
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n = 0, i;
	char *token = NULL;

	token = strtok(NULL, " \t\r");
	if (!token)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; token[i]; i++)
	{
		if (token[i] == '-')
			return;
		if (isdigit(token[i]) == 0)
		{
			dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	n = atoi(token);
	if (!n && strcmp(token, "0") != 0)
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	add_begin(stack, n);
}
