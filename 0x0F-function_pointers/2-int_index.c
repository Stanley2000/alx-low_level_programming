#include "function_pointers.h"

/**
  * int_index - a function to return the index of the first
  * element of an array that equals another element
  * @array: the array of numbers
  * @size: the size of the element
  * @cmp: a pointer to a function that do the comparison
  * Return: return the index of the first numver to match
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (cmp && size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j != 0)
			return (i);
	}
	return (-1);
}
