#include "main.h"

/**
  * _strcmp - a function that compares two strings
  * @s1: character one
  * @s2: character two
  * Return: shows successful termination of the function
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
