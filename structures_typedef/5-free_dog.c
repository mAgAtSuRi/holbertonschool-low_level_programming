#include "dog.h"

/**
 * free_dog - free a structure dog
 * @d: pointer to a dog structure
 */
void free_dog(dog_t *d)
{
	free(d);
}