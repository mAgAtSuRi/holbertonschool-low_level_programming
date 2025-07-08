#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(dogt *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
