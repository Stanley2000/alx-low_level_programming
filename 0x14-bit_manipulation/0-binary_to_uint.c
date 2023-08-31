#include "main.h"

/**
  * binary_to_uint - a function that converts a binary to decimal equivalent
  * @b: a pointer to the decimal number
  * Return: returns the decimal value or null if the function fails
  */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;
	unsigned int power_of_two = 1;
	int length = 0;

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += power_of_two;
		power_of_two *= 2;
	}

	return (result);
}
