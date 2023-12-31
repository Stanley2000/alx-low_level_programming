#include "main.h"
#include <string.h>



/**
  * _strncpy - a function to copy a string
  * @dest: destination of the string to be copied
  * @src: the string to be copied
  * @n: number of bytes to be copied
  * Return: returns pointer to the copied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);


}
