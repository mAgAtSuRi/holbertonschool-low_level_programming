#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - strucure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *, float, char *);
void print_dog(dog_t *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);

#endif
