/*
 * File: 0malloc_checked.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 *
 *@b: Value unsigned received from main
  *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
