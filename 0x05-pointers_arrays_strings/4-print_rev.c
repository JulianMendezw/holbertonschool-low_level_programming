#include "holberton.h"

/**
 * print_rev - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */

void print_rev(char *s)

{
int i;
int x;

for (i = 0; s[i] != '\0'; i++)
{

}
for (x = i; x >= 0; x--)
{
	if (s[x] != '\0')
	_putchar(s[x]);
}
_putchar('\n');
}
