#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 *
 */

void times_table(void)
{
	int i, j, num = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (num < 10)
					_putchar(' ');
			}

			if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(num + '0');
			}

		}
		_putchar('\n');
	}
}
