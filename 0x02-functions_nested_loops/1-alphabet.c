#include "main.h"

/**
  * main - The entry of the point of the program
  * Return: Shows successful termination of the program
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
