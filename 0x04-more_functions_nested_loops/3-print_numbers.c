#include "main.h"

/**
  * print_numbers - prints numbers form 0 to 9
  * void: shows the function doesn't return anything
  */

void print_numbers(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
