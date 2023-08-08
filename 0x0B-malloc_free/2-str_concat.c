#include "main.h"

/**
  * str_concat - a function that join two strings
  * @s1: pointer to the destination
  * @s2: pointer to the source
  * Return: returns a pointer
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, a;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	p = (char *) malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		p[a] = s1[a];
	for (a = 0; a < j; a++)
		p[a + i] = s2[a];
	p[i + j] = '\0';
	return (p);

}
