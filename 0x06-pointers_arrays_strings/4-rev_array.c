#include "main.h"

/**
  * reverse_array - a function that reverse an array
  * @a: the array to be reversed
  * @n: number of elements in the array
  */

void reverse_array(int *a, int n)
{
	int i, j, b;

	i = 0;

	j = n - 1;

	while (i < n)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;

		i++;
	}
}
