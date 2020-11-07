/*
 * File: 5-flip_bits.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * flip_bits - A function that returns the number of bits you would
 *				need to flip to get from one number to another.
 * @n: Given number a.
 *@m: given number b.
 *
 * Return:  The returns the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int x;

	x = (n ^ m);

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
