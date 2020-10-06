#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - counting the length of a string
 *@dest: value waited from the main.c
 *@src: source
 *@n: number of something
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
