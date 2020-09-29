#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */


int _strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
	largo++;
	return (largo);
}
