#include "main.h"

/**
  * is_palindrome - a function that checks if a string
  * palindrome
  * @s: pointer to the string
  * Return: shows successful termination of the function
  */

int len_string(char *s);
int palindrome_checker(char *s, int x, int y);

int is_palindrome(char *s)
{
	if (palindrome_checker(s, 0, len_string(s) - 1))
		return (1);
	else
		return (0);
}

/**
  * len_string - a helper function that return the length of the string
  * @s: pointer to the string
  * Return: shows successful termination of the function
  */
int len_string(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + len_string(s + 1));

}

/**
  * palindrome_checker - a function that checks if the string is palindrome
  * @s: pointer to the string
  * @x: index of the string starting form zero
  * @y: string index starting from the last character index
  * Return: shows successful termination of the function
  */
int palindrome_checker(char *s, int x, int y)
{
	if (s[x] != s[y])
		return (0);
	else if (y <= x)
		return (1);
	return (palindrome_checker(s, x + 1, y - 1));
}
