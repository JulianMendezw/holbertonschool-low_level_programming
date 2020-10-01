#include "holberton.h"

/**
 * _strncat - counting the length of a string
 *@dest: value waited from the main.c
 *@src: root
 *@n: ahjdshsqajk
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int largo;
int i;
for (largo = 0; dest[largo] != '\0'; largo++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[largo + i] = src[i];
}
dest[largo + i] = '\0';
return (dest);
}
