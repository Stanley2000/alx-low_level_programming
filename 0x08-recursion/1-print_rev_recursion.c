#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse other
  * @s: pointer argument to the string
  */


void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
