#include "main.h"

/**
  * create_array - a function that create an char array of size n
  * @size: the size of the array
  * @c: the character to fill in the array
  */
char *create_array(unsigned int size, char c)
{
	char a*;
	if (size ==0)
		return (NULL);
	unsigned int i;

	a = malloc(sizeof(*a) * size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (a == 0)
		return (NULL);
	return (a);	
}

