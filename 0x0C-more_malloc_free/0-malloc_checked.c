#include "main.h"
/**
  * malloc_checked - a function that allocate a heap memory
  * @b: no of bytes to be allocated
  * Return: returns a  pointer to the allocated memory 
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
