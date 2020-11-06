/*
 * File: 1-print_binary.c
 * Auth: Julian Mendez w
 */

#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: integer to convert a base 2.
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int k;

	int c;

	if (n == 0)
	{
		_putchar('0');
	}

	for (c = ((sizeof(unsigned long int) * 8) - 1); c >= 0; c--)
	{
		k = n >> c;

		if (k)
		{
			if (k & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
