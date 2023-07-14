#include <stdio.h>

/**
  * main - The entry of the c program
  * Return: Shows successful termination of the program
  */

int main(void)
{
	char start = 'a';
	char end = 'z';
	char End = 'Z';
	char Start = 'A';

	for (; start <= end; start++)
	{
		putchar(start);
	}

	for (; Start <= End; Start++)
	{
		putchar(Start);
	}
	putchar('\n');

	return (0);
}
