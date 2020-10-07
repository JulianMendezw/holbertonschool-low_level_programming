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
	while (haystack[i] != '\0')
	{
		x = i;
		j = 0;
		while (haystack[i] == needle[j] &&
			needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + x);
		i = x + 1;
	}
	return (0);
}
