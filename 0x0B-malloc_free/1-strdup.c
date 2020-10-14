/*
 * File: 1-strdup.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 *@str: string source.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

char *_strdup(char *str)
{
	char *copy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[len] = '\0';

	return (copy);
}
