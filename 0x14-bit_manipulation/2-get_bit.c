/*
 * File: 2-get_bit.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: pointer to the string.
 *@index: is the index, starting from 0 of the bit you want to get.
 *
 * Return:  The value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index >= (sizeof(n) * 8))
		return (-1);

	k = n >> index;
	return (k & 1);
}
