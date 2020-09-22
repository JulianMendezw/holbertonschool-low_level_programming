#include "holberton.h"
#include <stdio.h>
/**
 *_abs - Entry point
 *@n: integrer to check
 *Return: Always 0 (Success)
 *
 */

int _abs(int n)
{
if (n >= 0)
return (n);
else
{
n = (-1) * n;
return (n);
}
}
