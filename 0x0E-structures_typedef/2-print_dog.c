#include <stdio.h>
#include "dog.h"

/**
  * print_dog - a function to print the values stored in the variables of dog
  * @d: a pointer to the variable in struct dog
  */
void print_dog(struct dog *d)
{
	if (d == Null)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, id->age, d->owner);
}
