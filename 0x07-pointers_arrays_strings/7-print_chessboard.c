#include "holberton.h"

/**
 * print_chessboard - prints buffer in hexa
 * @a: the address of memory to print
 *
 * Return: always return 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
