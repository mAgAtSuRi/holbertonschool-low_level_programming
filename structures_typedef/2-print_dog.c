#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: pointer to the dog structure
 */
void print_dog(dog_t *d)
{
	if (d == NULL)
		return;
	printf("Name : %s\n Age : %f\n Owner : %s", d->name, d->age, d->owner);
}