/*
 * File: 0-binary_to_uint.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

unsigned int _strlen(const char *b);
unsigned int super_power(unsigned int n, unsigned int i);

/**
 * binary_to_uint -  a function that converts a binary number to
 *					an unsigned int.
 * @b: pointer to the string.
 *
 * Return:  The converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, sum = 0;


	if (b == NULL)
	return (0);

	n = _strlen(b);

	for (i = 1; i <= n ; i++)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);

		if (b[i - 1] == '1')
			sum = sum + super_power(2, (n - i));
	}

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

/**
 * super_power - count a string.
 * @n: Number.
 *@i: Number.
 *
 * Return: leng of string.
 */

unsigned int super_power(unsigned int n, unsigned int i)
{
	unsigned int x = 1;

	for (; i > 0; i--)
	{
		x = x * n;
	}
	return (x);
}
