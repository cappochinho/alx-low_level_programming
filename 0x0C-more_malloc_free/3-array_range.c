#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *n;
	int d, i;

	if (min > max)
		return (NULL);

	d = max - min;
	n = malloc((d + 1) * sizeof(int));
	if (ne == NULL)
		return (NULL);

	for (i = 0; i <= d; i++)
		n[i] = min++;

	return (n);
}
