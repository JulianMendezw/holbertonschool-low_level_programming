#include "holberton.h"
#include <stdio.h>

/**
 * _puts - counting the length of a string
 *@str: value waited from the main.c
 *
 * Return: Always 0.
 */

void _puts(char *str)

{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
