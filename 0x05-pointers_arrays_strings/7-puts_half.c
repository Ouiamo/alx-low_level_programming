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
 * puts_half - function that prints half of a string.
 * @str: arg 1.
 */
void	puts_half(char *str)
{
	int	i;

	i = _strlen(str);
	if (i % 2 == 0)
		i /= 2;
	else
		i = i / 2 + 1;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}
