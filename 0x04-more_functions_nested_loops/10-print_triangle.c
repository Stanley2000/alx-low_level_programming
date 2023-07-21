#include "main.h"

/**
 * print_triangle - displays a triange
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, a;

		for (i = 1; i <= size; i++)
		{
			for (a = i; a < size; a++)
			{
				_putchar(' ');
			}

			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
