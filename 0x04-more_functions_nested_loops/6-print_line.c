#include "holberton.h"

/**
 *print_line - Entry point.
 *@n: number to count
 *Return: Always 0 (Success)
 *
 */
void print_line(int n)
{
int x;
if (n > 0)
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
