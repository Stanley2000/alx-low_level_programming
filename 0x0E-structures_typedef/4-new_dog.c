#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -a function  returns the length of a string
 * @s: string to calculate it's length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte
 * @dest: pointer to the destination
 * @src: pointer to the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
  * new_dog - a function that initialize a new dog_t variable
  * @name: name of the dog_t variable
  * @age: age of the dog_t variable
  * @owner: owner of the dog_t variable
  * Return: a pointer to the initialized variable
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(char) * (len1 + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * (len2 + 1));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}

	_strcpy(p->name, name);
	_strcpy(p->owner, owner);
	p->age = age;

	return (p);
}
