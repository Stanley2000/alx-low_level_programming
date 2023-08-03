#include "main.h"

/**
  * _sqrt_recursion - a function that return the squareroot
  *  of a number by recursion
  * @n: the number to return it's squareroot
  * @i: an interator of the recursion function
  * Return: return a value after the recursion calls
  */
int root_checker(int n, int i);

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root_checker(n, 0));
}

/**
  * root_checker - a function to calculate the squareroot of the number
  * @n: the number to find its squreroot
  * @i: an interator of the recursion function
  * Return: shows successful termination of the function
  */
int root_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (root_checker(n, ++i));
}
