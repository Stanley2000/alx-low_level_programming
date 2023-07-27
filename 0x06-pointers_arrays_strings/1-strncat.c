#include "main.h"

/**
  * _strcat -  a function that join two strings
  * @dest: the pointer to the source string
  * @src: the pointer to the destination
  * 2n: number of bytes to concatenate
  * Return: a pointer to the resulting string
  */
char *_strcat(char *dest, char *src, int n)
{
	size_t i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
