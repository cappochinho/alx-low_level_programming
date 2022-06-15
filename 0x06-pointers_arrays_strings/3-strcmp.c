#include "main.h"

/**
 * _strcmp - Described below
 * Description: Compares two strings and returns
 * the difference between them
 * @s1: String 1
 * @s2: String 2
 * Return: Difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	char c1, c2;
	int i, l1, l2;

	int hold = 0;

	for (l1 = 0; l1[s1] != '\0'; l1++)
		;
	for (l2 = 0; l2[s2] != '\0'; l2++)
		;

	i = 0;
	c1 = *(s1 + i);
	c2 = *(s2 + i);
	if (l1 < l2)
	{
		while (i < l2)
		{
			if (c1 == c2)
			{
				continue;
			}
			else
			{
				hold = c1 - c2;
				break;
			}
			i++;
		}
	}
	else if (l1 > l2)
	{
		while (i < l1)
		{
			if (c1 == c2)
			{
				continue;
			}
			else
			{
				hold = -(c2 - c1);
				break;
			}
			i++;
		}
	}
	return (hold);
}
