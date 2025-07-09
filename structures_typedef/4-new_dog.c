#include "dog.h"

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
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	} dog_t;
	dog_t dog = {name, age, owner};
	return (dog_t);
}
