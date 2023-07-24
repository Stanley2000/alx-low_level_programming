#include "main.h"
#include <string.h>

/**
  * puts_half - a function that print half of a string
  * @str: function pointer parameter
  */

void puts_half(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		if (j % 2 == 0)
		{
			if (i >= (j / 2))
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i >= ((j - 1) / 2))
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
