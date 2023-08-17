#include "variadic_function"

/**
  * print_numbers - prints n numbers added as an arg to a function
  * @separator: a pointer to a character
  * @n: the number of int args int the function
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");

}
