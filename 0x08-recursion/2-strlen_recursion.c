#include "main.h"

/**
  * _strle_recursion - a function that returns the length of a string
  * @s: pointer to the string 
  *Return: returns the length of the string
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i++;
		return (i + _strlen_recursion(++s));
	}
}
