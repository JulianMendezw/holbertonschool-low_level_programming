/*
  * File: 2-str_concat.c
  * Auth: Julian Mendez w
  */

#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 *@s1: string source.
 *@s2: string source.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, y;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	len = (i + j + 1);
	array = malloc(sizeof(char) * len);

	if (array == 0)
		return (NULL);

	for (y = 0; y < i; y++)
		array[y] = s1[y];

	for (y = 0; y < j; y++)
		array[y + i] = s2[y];

	array[len - 1] = '\0';

	return (array);
}
