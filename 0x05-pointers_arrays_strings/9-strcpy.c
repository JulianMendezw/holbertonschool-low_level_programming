#include "holberton.h"

/**
 * *_strcpy - counting the length of a string
 *@dest: value waited from the main.c
 *@src: root
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int c;

for (c = 0; src[c]; c++)
{
dest[c] = src[c];
}

return (dest);
}

