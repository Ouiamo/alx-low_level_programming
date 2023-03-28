# include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: arg 1.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: arg 1.
 */
void print_rev(char *s)
{
	int	i;

	i = _strlen(s);

	while (i--)
		write(1, s + i, 1);
	write(1, "\n", 1);
}
