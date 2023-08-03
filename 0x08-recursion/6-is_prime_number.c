#include "main.h"
/**
  * is_prime_number - a function that checks if a
  * number is a prime number or not
  * @n: The number to be checked
  * @d: a calculation parameter
  * Return: shows successful termination of the function
  */

int prime_checker(int n, int d);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}
/**
  * prime_checker - perform the computations
  * @n: The number to be checked
  * @d: a calculation parameter
  * Return: shows successful termination of the function
  */

int prime_checker(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0 && d > 0)
		return (0);
	return (prime_checker(n, d - 1));
}
