#include "main.h"
/**
 * _puts_recursion -print a string followed by a new line.
 * @s: pointer to string.
 *
 * Return : void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar_recursion(s + 1);
}
