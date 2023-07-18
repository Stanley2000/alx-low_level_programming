#include "main.h"

/**
  * main - The entry of the point of the program
  * print_alphabet: a function that returns nothing
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
