#include "main.h"

/**
  * _memset - a function that set each byte to zero
  * @str: pointer to the memory address
  * @a: character zero
  * @n: size of memory to be allocated
  * Return: return the address ot the memory
  */
char _memset(char *str, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = a;
	}

	return (str);
}
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
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
