#include "main.h"

/**
 * _memset - Fills memory with a constant byte 
 * @s: buffer array 
 * @b: constant byte 
 * @n: number of byte of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constent byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigend int count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
