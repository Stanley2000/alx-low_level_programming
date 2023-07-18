#include "main.h"

/**
  * print_alphabet - a function that print alphabets in lowercase
  */

void print_alphabet(void) /*a function to print out alphabets in lower case*/
{
	char start = 'a';
	char end = 'z';

	for (; start <= end; start++)
	{
		_putchar(start);

	}
	_putchar('\n');
}
