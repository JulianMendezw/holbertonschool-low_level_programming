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
	int i, len;
	char *array;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];
	array[len] = '\0';

	return (array);
}
