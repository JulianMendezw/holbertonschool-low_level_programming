/*
 * File: 2-str_concat.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 *@width: This is the number of columns.
 *@height: This is the number of rows.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; --i)
			{
			free(array[i]);
			}
			return (NULL);
		}
	}
	return (array);
}
