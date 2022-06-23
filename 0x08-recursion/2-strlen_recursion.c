#include "main.h"

/**
 * _strlen_recursion - Takes a string s and returns its length
 * Description: Uses recursion to perform this task
 * @s: String pointer
 * Return: The length of the string or 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
