#include "main.h"

/**
  *_abs - the function returns the absolute value of an integer
  * @n: integer to be checked
  * Return: shows successful termination of the function
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
