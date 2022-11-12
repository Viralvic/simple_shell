#include "shell.h"

/**
 * find_str_sq - finds the index of the separator `sep`
 * inside the string `s`, starting from the index `idx`
 * @s: string constant where to search
 * @sep: the separator(s) to search for
 * @idx: the position of the string from where to start
 *
 * Return: the index of the `sep` inside the string `s`
 */
Interval find_str_sq(const char *s, const char *sep, int idx)
{
	Interval itv;
	int xi = 0, xj = 0, xk = 1;
	int n = find_char_num(s, sep, idx) + 1;
	int array[n];
	int o = 0;

	/* printf("number of separators in the string: %d\n", n); */
	array[0] = idx;

	while (sep[xi])
	{
		xj = idx;
		while (s[xj])
		{
			if (s[xj] == sep[xi])
			{
				array[xk] = xj;
				xk++;
			}

			xj++;
		}
		xi++;
	}

	o = sizeof(array) / sizeof(array[0]);
	insertion_sort(array, o);

	itv.beg = array[0];
	itv.end = array[1];

	return (itv);
}
