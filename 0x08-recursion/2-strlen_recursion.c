
#include "holberton.h"

/**
 * _strlen_recursion - prints buffer in hexa
 * @s: the address of memory to print
 *
 * Return: always return 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
