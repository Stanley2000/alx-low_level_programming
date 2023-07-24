#include "main.h"

/**
  * swap_int - a function that swaps the value of two variables using pointers
  * @a: pointer one
  * @b: pointer two
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
