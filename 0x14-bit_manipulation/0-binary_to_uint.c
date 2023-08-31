#include "main.h"

/**
  * binary_to_uint - a function that converts a binary to decimal equivalent
  * @b: a pointer to the decimal number
  * Return: returns the decimal value or null if the function fails
  */

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	unsigned int index = 0;
	unsigned int len = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	i = len - 1;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			index = (len - i) - 1;
			result += (1 << index);

		}
		i--;
	}
	return (result);
}
