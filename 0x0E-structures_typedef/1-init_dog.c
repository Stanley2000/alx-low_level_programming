#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - a function to intialize variable of type struct dog
  * @d: a pointer to the variable initalized
  * @name: value hold by the variable
  * @age: second valued held by the variable
  * @owner: a variable to hold the last variable
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
