#include "holberton.h"
#include <stdio.h>
/**
 *print_last_digit - Entry point
 *@n: integrer to check
 *Return: Always 0 (Success)
 *
 */

int print_last_digit(int n)
{
int d = n % 10;

if ( n >= 0)
{
_putchar('0' + d);
return (d);
}
else
{
d = d * (-1);
_putchar('0' + d);
return (d);
}
}
