#include "holberton.h"

/**
 * _strstr - is looking for a substring
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			j++;
			i++;
		}
		if (j > 0)
		{
			i -= j;
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		if (needle[0] == 0)
		{
			return ('\0');
		}
	}
	return ('\0');
}
