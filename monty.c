#include "monty.h"
/**
 * main - primary function with 2 arguments
* @argc: number of arguments
* @agrv: monty file location
 * Return: return
 */

int main(int argc, char **argv)
{
	char op[1024];
	FILE *fs;
	char *line = NULL, *token = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	void (*f)(stack_t **, unsigned int);

	if (argc != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(op, 1024, fs) != NULL)
	{
		line_number++;
		line = strtok(op, "\n");
		if (!line)
			continue;
		token = strtok(line, " \t\r");
		if (token)
		{
			f = get(token, line_number);
			if (f)
				f(&stack, line_number);
		}
	}
	free_dlist(stack);
	fclose(fs);

	return (0);
}

