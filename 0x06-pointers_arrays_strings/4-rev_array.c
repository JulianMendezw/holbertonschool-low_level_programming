#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - revers a array
 *@a: value waited from the main.c
 *@n: number of elements of an array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int c, t;

	for (c = 0; c < (n / 2); c++)
	{
		t = a[c];
		a[c] = a[(n - c) - 1];
		a[n - c - 1] = t;
	}
}

