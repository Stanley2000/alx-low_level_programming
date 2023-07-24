#include <string.h>
#include "main.h"

/**
  * puts2 - a function
  * @str: function pointer parameter
  */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}

}
