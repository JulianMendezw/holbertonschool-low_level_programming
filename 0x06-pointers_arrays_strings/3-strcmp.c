#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - to compare two string
 *@s1: value waited from the main.c
 *@s2: source to be compare
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		return (s1[c] - s2[c]);
	}
	return (0);
}
