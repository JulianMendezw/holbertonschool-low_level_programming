/*
 * File: 3-set_bit.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: Given number.
 *@index: is the index, starting from 0 of the bit you want to set.
 *
 * Return:  The value of the bit at index index or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n = *n | 1 << index;

	if (*n)
		return (1);

	return (0);
}
