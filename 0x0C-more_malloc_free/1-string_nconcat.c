#include "main.h"
/**
  * string_nconcat - a function that joins two strings
  * @s1: The destination string
  * @s2: The source string
  * @n: the size of destination to be added
  * Return: returns the pointer to the allocated memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k;
	char *p;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
	{
		p = (char *) malloc(sizeof(char) * i + j + 1);
		if (p == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
			p[k] = s1[k];
		for (k = 0; k < j; k++)
			p[k + i] = s2[k];
		p[k + i] = '\0';
	}
	else
	{
		p = (char *) malloc(sizeof(char) * i + n + 1);
		if (p == NULL)
			return (NULL);
		for (k = 0; k < i; k++)
			p[k] = s1[k];
		for (k = 0; k < n; k++)
			p[k + i] = s2[k];
		p[k + i] = '\0';
	}
	return (p);


}
