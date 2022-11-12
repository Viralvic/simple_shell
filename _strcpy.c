#include "shell.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: buffer pointer to a destination string
 * @src: string constant to be copied
 *
 * Return: void.
 */
void _strcpy(char *dest, const char *src)
{
	int xi;

	for (xi = 0; src[xi] != 0; xi++)
		dest[xi] = src[xi];

	dest[xi] = src[xi];
}
