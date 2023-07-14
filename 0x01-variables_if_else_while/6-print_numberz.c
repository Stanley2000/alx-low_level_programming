#include <stdio.h>

/**
  * main - The entry of the c program
  * Return: Shows successful termination of the program
  */

int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
