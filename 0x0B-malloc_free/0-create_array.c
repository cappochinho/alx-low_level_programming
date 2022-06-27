#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of array
 * @c: initializing character
 * Return: NULL if size is 0
 * Return: Pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
        if (size == 0)
                return (NULL);

        char *a;
        unsigned int i = 0;

        a = malloc(size * sizeof(char));

        for (; i < size; i++)
                a[i] = c;

        return (a);

        return (NULL);
}
