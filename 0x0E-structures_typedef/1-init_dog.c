#include "dog.h"

/**
 * init_dog - Takes a struct of a dog
 * @d: struct object
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: And information about a dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->age = age;
	d->name = name;
	d->owner = owner;
}
