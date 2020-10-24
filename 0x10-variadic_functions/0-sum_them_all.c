/*
 * File: 0-sum_them_all.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  sum_them_all - A function that returns the sum of all its parameters.
 *
 *@n: number of parameters to sum.
 *
 * Return: return int.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_r = 0;

	va_list(parameters);

	if (n == 0)
		return (0);

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		sum_r += va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum_r);
}
