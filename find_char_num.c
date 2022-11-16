#include "shell.h"

/**
 * find_char_num - helper that finds the number of characters c inside the
 * string s, starting from the index idx
 * @s: string where to search
 * @c: string of characters to search for
 * @idx: the position in the string from where to start
 *
 * Return: the number of occurences of charactes from the string `c`
 */
int find_char_num(const char *s, const char *c, int idx)
{
	int xi, xj, xq;

	xj = xq = 0;
	xi = idx;

	while (c[xj])
	{
		xi = idx;
		while (s[xi])
		{
			if (s[xi] == c[xj])
				xq++;

			xi++;
		}

		xj++;
	}

	return (xq);
}
