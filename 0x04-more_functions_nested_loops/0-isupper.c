#include "main"

/**
  * _isupper - a function that checks for uppercase character
  * @c: character to be checked
  * Return: shows successful termination of the function
  */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
