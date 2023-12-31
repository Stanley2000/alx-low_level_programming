#include "main.h"

/**
 * _memset - a function that  fills memory with a constant byte
 * @s: pointer variable
 * @b: the constant byte
 * @n: number of bytes of memory area
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
