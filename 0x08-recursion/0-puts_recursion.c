#include "main.h"

/**
  * _puts_recursion - a prints out a string followed by a new line
  * @s: a pointer argument to the string to be printed
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');

	}
	else
	{
		_putchar(*S);
		_puts_recursion(++s);
	}
}
