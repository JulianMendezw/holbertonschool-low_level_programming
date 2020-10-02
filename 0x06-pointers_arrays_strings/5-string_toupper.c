#include "holberton.h"

/**
 * string_toupper - counting the length of a string
 *
 *
 * Return: Always 0.
 */

char *string_toupper(char * s)
{
	int i;
       
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			      
		}
	}
	return (s);
}
