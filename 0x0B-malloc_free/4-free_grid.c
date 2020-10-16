/*
 * File: 2-str_concat.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 *             grid previously created by your.
 *
 *
 *@grid: Grid that it is goin to free.
 *@height: Number of rows.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
