#include "holberton.h"
#include <ctype.h>
/**
 *_isalpha - Entry point
 *@c:  character to check
 *Return: Always 0 (Success)
 *
 */
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
