#include "main.h"

/**
  * factorial - prints out the factorial of a number
  * @n: the number to print it's factorial
  *Return: returns the value the factorial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
