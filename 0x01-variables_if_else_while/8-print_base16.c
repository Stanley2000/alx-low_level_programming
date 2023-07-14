#include <stdio.h>

/**
  * main - The entry point of the program
  * Return: This shows successful execution of the program
  */


int main(void)
{
	int a = 0;
	char x = 'a';

	for (; a < 10; a++)
	{
		putchar('0' + a);
	}
	for (; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
