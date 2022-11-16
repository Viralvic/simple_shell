#include "shell.h"

/**
 * exit_handle - takes care of contrl -D
 * @line: command line
 * @length: size of the line
 */
void exit_handle(char *line, ssize_t length)
{
	if (_strcmp(line, "exit", 0, 3))
	{
		if (length == -1)
			write(1, "\n", 1);

		exit(0);
	}

	if (length == EOF)
	{
		write(1, "\n", 1);
		exit(0);
	}
}
