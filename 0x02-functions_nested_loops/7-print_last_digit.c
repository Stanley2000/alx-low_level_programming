#include "main.h"

/**
  * print_last_digit - prints out the last digit of an integer
  * @n: The number to return its last digit
  * Return: shows successful termination of the function
  */

int print_last_digit(int n)
{
	int a;
	
	if (n < 0)
	{
		n *= -1;
	}

	a = n % 10;
	return (a);

}
