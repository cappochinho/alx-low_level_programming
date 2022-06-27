#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int l, len, len2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	len = i;

	i = 0;
	while (s2[i])
		i++;
	len2 = i + 1;

	l = (len + len2);

	a = (char *) malloc(l * sizeof(char));
	if (a == 0)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i + 1] = '\0';
	return (a);
}
