#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Holds information on dogs
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include <stdio.h>
#include <stdlib.h>

#endif /* DOG_H */