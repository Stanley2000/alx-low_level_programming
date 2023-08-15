#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release the heap memory allocated for a struct dog
 * @d: pointer to the memory to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
