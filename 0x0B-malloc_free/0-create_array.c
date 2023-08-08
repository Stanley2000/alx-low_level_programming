#include "main.h"

/**
  * create_array - a function that create an char array of size n
  * @size: the size of the array
  * @c: the character to fill in the array
  * Return: a pointer to the memory address allocated
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(sizeof(*a) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (a == 0)
		return (NULL);
	return (a);
}

