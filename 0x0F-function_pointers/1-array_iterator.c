#include "function_pointers.h"

/**
  * array_iterator - a function that prints out the array of numbers
  * @array: array of numbers
  * @size: the size of the array
  * @action: pointer to a function that does the printing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int elem, i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		elem = array[i];
		action(elem);

	}

}
