#include <stdio.h>

/**
  * main - The entry point of the c program
  *Return: Show the successful termination of the program
  */

int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
