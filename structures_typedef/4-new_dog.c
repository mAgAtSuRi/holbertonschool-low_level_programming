#include "dog.h"
#include <stddef.h>

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
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
		
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
