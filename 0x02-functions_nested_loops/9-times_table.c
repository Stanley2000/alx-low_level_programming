#include "main.h"

/**
  * times_table - prints out the times table
  * void: the function returns nothing
  */

void times_table(void)
{
	int a, b, res;

	for (a = 0; a <= 9; a++)
	{
		for (a, b = 0; b <= 9; b++)
		{
			res = a * b;
			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
		}

	}
}
