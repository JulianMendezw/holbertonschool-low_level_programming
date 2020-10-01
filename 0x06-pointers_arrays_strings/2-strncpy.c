#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - counting the length of a string
 *@n: value waited from the main.c
 *@dest: destination
 *@src: source
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

