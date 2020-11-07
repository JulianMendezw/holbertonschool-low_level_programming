/*
 * File: 100-get_endianness.c
 * Auth: Julian Mendez w
 */

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char)&x;

	return (y);
}
