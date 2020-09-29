#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - addresses of variables
 *@a: value of var a
 *@b: value of var b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
