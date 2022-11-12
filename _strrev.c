#include "shell.h"

/**
 * _strrev - returns reversed string
 * @str: string to be reversed
 *
 * Return: reversed string
 */
char *_strrev(char *str)
{
	int xi;
	int lent = _strlen(str);
	char c;

	if (!str)
		return (NULL);

	for (xi = 0; xi < (lent / 2); xi++)
	{
		c = str[xi];
		str[xi] = str[lent - xi - 1];
		str[lent - xi - 1] = c;
	}

	return (str);
}

