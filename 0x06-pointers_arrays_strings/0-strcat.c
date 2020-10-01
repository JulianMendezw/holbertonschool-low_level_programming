#include "holberton.h"

/**
 **_strcat - Entry point.
 *@dest: the values should copy here
 *@src: this is the values that we gonna coppy to dest
 *Return: Always 0 (Success)
 *
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int x;

	for (c = 0; dest[c] != '\0'; c++)
	;
	for (x = 0; src[x] != '\0'; ++x, ++c)
	{
		dest[c] = src[x];
	}
	dest[c] = '\0';
	return (dest);
}

