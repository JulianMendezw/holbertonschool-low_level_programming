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
	int j, i, x;

	i = 0;
	while (; haystack[i] != '\0')
	{
		
		if (needle[0] == 0)
		{
			return (0);
		}
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
	}
	return (0);
}
