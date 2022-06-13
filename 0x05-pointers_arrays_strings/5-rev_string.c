#include "main.h"

/**
 * rev_string - Described below
 * Description: Takes a string a reverses it
 * @s: String input
 * Return: No value
 */

void rev_string(char *s)
{
	int len, i;
	char *s_start, *s_end, ch;

	for (len = 0; s[len] != '\0'; len++)
		;
	s_start = s;
	s_end = s + l - 1;

	for (i = 0; i < len / 2; i++)
	{
		ch = *s_end;
		*s_end = *s_start;
		*s_start = ch;

		s_start++;
		s_end--;
	}
}
