#include "shell.h"

/**
 * print_env - print out env
 * @env: env
 */
void print_env(char **env)
{
	while (*env)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		_putchar('\n');
		env++;
	}
}
