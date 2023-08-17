iinclude "variadic_functions.h"

/**
  * sum_them_all  - is a function that sums all arguments added in a function
  * @n: the number of the elements to be passed in the function
  * Return: return the sum of all arguments passed
  */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
