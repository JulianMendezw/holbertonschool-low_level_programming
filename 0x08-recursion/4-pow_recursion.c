
#include "holberton.h"

/**
 * _pow_recursion - prints buffer in hexa
 * @x: the address of memory to print
 *@y: another value that i dont understand
 * Return: always return 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
