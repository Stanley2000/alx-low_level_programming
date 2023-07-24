#include <string.h>

/**
  * print_rev - a function that print a string in reverse other
  * @s: a pointer argument
  */

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
