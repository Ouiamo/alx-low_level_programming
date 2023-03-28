# include "main.h"

/**
 * print_array - function that prints n elements of an array of integers.
 * @a: arg 1.
 * @n: arg 2.
 */
void	print_array(int *a, int n)
{
	int	i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			printf("%d", a[i]);
			i++;
			if (i != n)
				printf(", ");
		}
	}
	printf("\n");
}
