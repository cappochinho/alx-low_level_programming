#include "main.h"

/**
 * _strchr - Described below
 * Description: Finds the first occurence of c
 * and return a pointer to it
 * @s: String to be traversed
 * @c: Character for comparison
 * Return: Pointer to c or NULL if no occurence of c is found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

    	for (; s[i] != '\0'; i++)
	{
		if (c == s[i])
			break;
	}
	
	if (c == s[i])
		return (s + i);

	return (NULL);
}
