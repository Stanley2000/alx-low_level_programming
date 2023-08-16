#include <stdio.h>
#include "function_pointer.h"
/**
  * print_name - a function that print names
  * @name: name to print
  * @f: a pointer to a function
  * Return: returns null
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

