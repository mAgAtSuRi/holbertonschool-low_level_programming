#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0;
	int i;

	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	dog->name = malloc(len_name + 1);
	for (i = 0; i < len_name; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(len_owner + 1);
	for (i = 0; i < len_owner; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
