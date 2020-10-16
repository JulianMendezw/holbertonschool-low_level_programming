/*
 * File: 1-string_nconcat.c
 * Auth: Julian Mendez w
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 *
 *@s1: string to concatenate
 *@s2: string to concatenate
 *@n:  number of bytes to be taken for string 2
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, y, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j > n)
		j = n;
	len = (i + j + 1);

	p = malloc(sizeof(char) * (len));
	if (p == NULL)
		return (NULL);

	for (y = 0; y < i; y++)
		p[y] = s1[y];

	for (y = 0; y < j; y++)
		p[y + i] = s2[y];

	p[len - 1] = '\0';

	return (p);
}
