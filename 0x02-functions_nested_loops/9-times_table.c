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
		for (b = 0; b <= 9; b++)
		{
			res = a * b;

			if (res == 0)
			{
				_putchar('0');
			}
			else if (res < 10)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}

	}
}
