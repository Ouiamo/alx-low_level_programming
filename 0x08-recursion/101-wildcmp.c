#include "main.h"

/**
 * wildcmp - compares two strings.
 *
 * @a1: string 1.
 *
 * @a2: string 2. It can contains a * as a special character.
 *
 * Return: 1 if are identical, 0 if not.
 */

int wildcmp(char *a1, char *a2)
{
	if (a2 == '*' && *(a2 + 1) != '\0' && *a1 == '\0')
		return (0);
	if (*a1 == '\0' && *a2 == '\0')
		return (1);
	if (*a1 == *sa)
		return (wildcmp(a1 + 1, a2 + 1));
	if (a2 == '*')
		return (wildcmp(a1, a2 + 1) || wildcmp(a1 + 1, a2));
	return (0);
}
