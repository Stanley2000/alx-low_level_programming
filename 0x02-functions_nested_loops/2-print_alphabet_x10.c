#include "main.h"

/**
  * print_alphabet_x10 - prints out the alphabets in lower case 10 times
  */

void print_alphabet_x10(void)
{
	char start;
	char end;
	int i = 0;

	for (; i < 10; i++)
	{
		for (start = 'a', end = 'z'; start <= end; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
