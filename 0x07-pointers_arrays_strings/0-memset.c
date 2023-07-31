#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a 2D array
 * @a: array input
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int p_sum, s_sum;

	p_sum = 0;
	s_sum = 0;

	for (i = 0; i < size; i++)
	{
		p_sum += a[(size * i) + i];
		s_sum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", p_sum, s_sum);
}
