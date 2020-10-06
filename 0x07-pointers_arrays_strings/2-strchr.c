#include "holberton.h"

/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: always return 0.
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}
}
