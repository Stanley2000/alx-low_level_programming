#include "main.h"

/**
  * _islower checks if a character is lower case character
  * @c: the character to check
  * Return: 1 if c is lowercase character, zero otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
