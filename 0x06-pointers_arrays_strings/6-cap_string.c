#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z') &&
		    (s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == ';'
		    || s[i - 1] == '.' || s[i - 1] == '!'
		    || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
