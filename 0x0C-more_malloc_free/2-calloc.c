#include "main.h"

/**
  * _calloc - a function that allocates and set the dynamic memory to zero
  * @nmemb: the number of elements of the array
  * @size: the size of the data type
  * Return: returns a pointer to the memory location
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = '0';
	}
	return (ptr);
}
