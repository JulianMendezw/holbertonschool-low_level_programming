/*
 * File: 0-binary_to_uint.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

unsigned int _strlen(const char *b);

/**
 * binary_to_uint -  a function that converts a binary number to
 *					an unsigned int.
 * @b: pointer to the string.
 *
 * Return:  The converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, x, j, sum = 0, sum1 = 0, ld = 0;

	n = _strlen(b);

	if (n <= 1 && b[0] == '1')
		return (1);
	else if (n <= 1 && b[0] == '0')
		return (0);

	if (b[n - 1] == '1')
		ld = 1;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			x = 1;
			for (j = 0; j < (n - 1); j++)
			{
				x = (x * 2);
				sum1 = x;
			}
		}
		else if (b[i] == '0')
			sum1 = 0;

		sum += sum1;
		n = n - 1;
	}
	sum = sum + ld;
	return (sum);
}


/**
 * _strlen - count a string.
 * @b: String to count.
 *
 * Return: leng of string.
 */
unsigned int _strlen(const char *b)
{
	unsigned int i;

	for (i = 0; b[i]; i++)
	;
	return (i);
}
