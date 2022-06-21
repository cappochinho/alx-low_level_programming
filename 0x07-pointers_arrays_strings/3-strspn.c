#include "main.h"

/**
 * _strspn - Described below
 * Description: Checks the length of accept covered in s
 * 
 * @s: Main string
 * @accept: Substring
 * Return: Length covered by substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, hold = 0;
    	int s_len;

    	for (i = 0; (s[i] != '\0') && (s[i] != ' '); i++)
        	s_len = i;

    	for (j = 0; j < s_len; j++)
    	{
        	for (i = 0; i < s_len; i++)
        	{
            		if (accept[j] == s[i])
            		{
                		if (i > hold)
                    			hold = i;
            		}
        	}
    	}

    	return (hold + 1);
}
