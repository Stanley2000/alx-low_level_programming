#include <stdio.h>

/**
  * main - The entry of the c program
  * Return: Shows successful termination of the program
  */

int main(void)
{
	char start = 'a';
	char end = 'z';

	for (; start <= end; start++)
	{
		putchar(start);
	}
	putchar('\n');

	return (0);
}
