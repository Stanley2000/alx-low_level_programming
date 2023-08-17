#include "variadic_function"

/**
  * print_numbers - prints n numbers added as an arg to a function
  * @separator: a pointer to a character
  * @n: the number of int args int the function
  */

{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));
		else if (separator && i == 0)
			printf("%d", va_arg(num, int));
		else
			printf("%s%d", separator, va_arg(num, int));
	}

	va_end(num);

	printf("\n");
}
