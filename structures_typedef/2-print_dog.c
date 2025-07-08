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
	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n",d->owner);
}
