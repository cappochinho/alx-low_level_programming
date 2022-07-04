#include "dog.h"

/**
 * free_dog - Free dog structure
 * @d: pointer to struct to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
