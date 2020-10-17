/*
 * File: 2-calloc.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - counting the length of a string
 *@s: value waited from the main.c
 *@b: string
 *@n: number of bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;

	}
	return (s);
}


/**
 * _calloc - a function that returns a pointer to a newly allocated
 *
 *@nmemb: string source.
 *@size: string source.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
	{
		free(p);
		return (NULL);
	}

	_memset(p, 0, nmemb * size);
	return (p);
}
