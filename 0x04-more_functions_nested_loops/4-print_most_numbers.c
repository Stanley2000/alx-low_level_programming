#include "main.h"

/**
  * print_most_numbers - print numbers
  * Return: 0
  */

void print_most_numbers(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}

	}
	_putchar('\n');
}
