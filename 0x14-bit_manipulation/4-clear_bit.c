/*
 * File: 4-clear_bit.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: Given number.
 *@index: is the index, starting from 0 of the bit you want to set.
 *
 * Return:  The value of the bit at index index or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
