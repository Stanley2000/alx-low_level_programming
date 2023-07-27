#include "main.h"

/**
  * _strcat -  a function that join two strings
  * @dest: the pointer to the source string
  * @src: the pointer to the destination
  * Return: a pointer to the resulting string
  */
char *_strcat(char *dest, char *src)
{
	size_t i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
