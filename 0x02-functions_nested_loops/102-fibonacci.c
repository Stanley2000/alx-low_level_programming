#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: returns 0 (success)
 */
int main(void)
{	long int a, b, next;
	int c;

	a = 1;
	b = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (c < 50)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		next = a + b;
		a = b;
		b = next;
	}
		return (0);
}
