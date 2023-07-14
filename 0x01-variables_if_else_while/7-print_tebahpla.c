#include <stdio.h>

/**
  * main - The entry point of the programm
  * Return: Show successful termination of the program
  */

int main(void)
{
	char start = 'a';
	char end = 'z';

	for (; end >= start; end--)
	{
		putchar(end);
	}
	putchar('\n');
	return (0);
}
