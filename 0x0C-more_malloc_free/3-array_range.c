#include "main.h"


/**
  * array_range - a function that allocate heap memory
  * @min: the min value in the array
  * @max: the max value of the array
  * Return: returns a pointer to the memory allocate
  */

int *array_range(int min, int max)
{
	int i, d;
	int *p;

	if (min > max)
		return (NULL);
	d = (max - min) + 1;
	p = (int *) malloc(sizeof(int) * d);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < (d - 1); i++)
	{
		p[i] = min;
		min + 1;
	}
	p[i] = max;
	return (p);
}
