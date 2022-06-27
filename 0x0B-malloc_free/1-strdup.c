#include "main.h"

/**
 * _strdup - Allocates a new memory location
 * @str: String to be copied
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int len, i = 0;

	while (str[i])
		i++;
	len = i + 1;

	a = (char *) malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		*(a + i) = *(str + i);
	return (a);
}
