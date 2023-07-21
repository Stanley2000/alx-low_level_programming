#include "main.h"

/**
  * print_line - print line with _ n times
  * @n: no of times to print _
  */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n && n >= 1; a++)
	{
		_putchar('_');
	}
	_putchar('\n);
}
