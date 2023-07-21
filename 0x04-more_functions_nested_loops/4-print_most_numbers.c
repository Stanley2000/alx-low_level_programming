#include "main.h"

/**
  * print_most_numbers - print numbers
  */

void print_most_numbers(void)
{
	int a = 0;

	for (a; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}

	}
	_putchar('\n');
}
