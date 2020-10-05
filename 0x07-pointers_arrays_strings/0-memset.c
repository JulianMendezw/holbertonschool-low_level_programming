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
	while (s != '\0' && n--)
	{
		*s = b;
		s++;
	}
	return (s);
}
