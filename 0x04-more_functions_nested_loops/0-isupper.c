#include "holberton.h"

/**
 *_isupper - Entry point.
 *@c: waiting for the character
 *Return: Always 0 (Success)
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
