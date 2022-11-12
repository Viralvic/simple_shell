#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: what to add to the destination string
 *
 * Return: void
 */
void _strcat(char *dest, const char *src)
{
	int xi;
	int lent = _strlen(dest);

	for (xi = 0; src[xi] != '\0'; xi++)
		dest[lent++] = src[xi];

	dest[lent] = '\0';
}
