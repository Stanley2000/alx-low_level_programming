#include "main.h"
#include <stdio.h>


/**
 * string_toupper -a function to  changes all lowercase letter
 * of a string to uppercase
 * @str: string to modify
 * Return: the resulting string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
