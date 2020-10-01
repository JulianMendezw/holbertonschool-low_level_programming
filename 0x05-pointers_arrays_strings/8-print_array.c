#include "holberton.h"
#include <stdio.h>

/**
 * print_array - counting the length of a string
 *@a: value waited from the main.c
 *@n: number of element of the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
if (x < (n - 1))
{
printf("%d, ", a[x]);
}
else
{
printf("%d", a[x]);
}
}
printf("\n");
}
