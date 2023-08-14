#include <stdio.h>

/**
  * main - a predifinded macros that print the
  * me of the file we are compiling from
  * Return: show successful termination ot the program
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
