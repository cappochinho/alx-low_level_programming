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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#include <stdio.h>
#include <stdlib.h>

#endif /* DOG_H */
