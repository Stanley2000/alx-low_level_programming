#include "main.h"

/**
  * print_to_98 - a function that print numbers
  * void: shows the function returns nothing
  * @n: the start of the range of numbers to be printed
  */
void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (; n > 97; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
