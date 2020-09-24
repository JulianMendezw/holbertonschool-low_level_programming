#include "holberton.h"

/**
 *print_numbers - Entry point.
 *
 *Return: Always 0 (Success)
 *
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)

_putchar('0' + n);
_putchar('\n');
}
