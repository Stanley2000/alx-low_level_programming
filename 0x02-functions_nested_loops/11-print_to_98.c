#include "main.h"
#include <stdio.h>


/**
  * print_to_98 - a function that print numbers
  * void: shows the function returns nothing
  * @n: the start of the range of numbers to be printed
  */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n != 98)
		{
			printf("%d", n);
		}
		else if (n == 98)
		{
			printf("%d", n);
		}
	}
	for (; n >= 98; n--)
	{
		if (n != 98)
		{
			printf("%d", n);
		}
		else if (n == 98)
		{
			printf("%d", n);
		}
	}
}
