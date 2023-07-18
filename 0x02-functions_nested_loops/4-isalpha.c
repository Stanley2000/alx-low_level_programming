#include "main.h"

/**
  * _isalpha - checks if a character is an alphabet
  * @c: The character to be checked
  * Return: returns one if the char is an alphabet otherwise it returns zero
  */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
