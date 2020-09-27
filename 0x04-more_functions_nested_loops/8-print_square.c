#include "holberton.h"

/**
 *print_square - Entry point.
 *@size: number to count
 *Return: Always 0 (Success)
 *
 */
void print_square(int size)
{
	int w, h;

	if (size <= 0)
		_putchar(10);
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
	_putchar(10);
	}
}
