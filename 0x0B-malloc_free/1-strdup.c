#include "main.h"
/**
  * _strdup - a function that returns a pointer
  * @str: the pointer
  * Return: returns a pointer to the str
  */
char *_strdup(char *str)
{
	char *a;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	a = (char *) malloc(sizeof(char) * i);
	if (a == 0)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	a[j] = '\0';
	return (a);
}
