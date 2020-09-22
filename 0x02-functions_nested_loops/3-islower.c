#include "holberton.h"
#include <ctype.h>
/**
 *_islower - Entry point
 *@c:  character to check
 *Return: Always 0 (Success)
 *
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
