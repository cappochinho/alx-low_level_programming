#include "main.h"

/**
 * _strlen - Described below
 * Description: Determines the length of a string using a loop
 * @s: String input
 * Return: Length of string
 */

int _strlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return (i);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: Number of characters to concatenate from s2
 * Return: Pointer to memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *s;
    unsigned int i, len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";

    len1 = _strlen(s1);

    if (s2 == NULL)
        s2 = "";

    len2 = _strlen(s2);

    if (n >= len2)
        n = len2;

    s = malloc(len1 + n + 1);
    if (s == NULL)
        return (NULL);

    for (i = 0; i < (len1 + n); i++)
    {
        if (i < len1)
            s[i] = *s1, s1++;
        else
            s[i] = *s2, s2++;
    }
    s[i] = '\0';
    return (s);
}
