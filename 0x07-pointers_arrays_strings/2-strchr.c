#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: the string to check
 * @c: the character to locate
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (10)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
