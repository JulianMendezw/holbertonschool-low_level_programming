#include "holberton.h"

/**
 * _memset - counting the length of a string
 *@s: value waited from the main.c
 *@b: string
 *@n: number of bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (n-- > 0)
	{
		*s++ = b;
		i++;
	}
	return (s);
}
