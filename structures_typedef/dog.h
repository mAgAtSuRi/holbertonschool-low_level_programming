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
} dogt;

void init_dog(dogt *d, char *, float, char *);

#endif
