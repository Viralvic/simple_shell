/**
 * _strlen - finds the length of the string
 * @s: a string constant
 *
 * Return: the length of the string s
 */
int _strlen(const char *s)
{
	int xi = 0;

	while (s[xi] != '\0')
		xi++;

	return (xi);
}
