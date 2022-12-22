#include "monty.h"
/**
 * get - search a function
 * @b: pointer
 * @n: integer
 * Return: return
 */

void (*get(char *b, unsigned int n))(stack_t **, unsigned int)
{
	int i = 0;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (opcodes[i].opcode)
	{
		if (strcmp(opcodes[i].opcode, b) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}
	if (!opcodes[i].opcode)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", n, b);
		exit(EXIT_FAILURE);
	}
	return (NULL);
}
