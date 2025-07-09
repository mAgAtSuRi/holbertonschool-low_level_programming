#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free a structure dog
 * @d: pointer to a dog structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
