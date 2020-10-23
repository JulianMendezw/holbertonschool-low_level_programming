/*
 * File: 1-print_numbers.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_numbers - A function that prints numbers, followed by a new line.
 *@n: number of parameters to print.
 *@separator: Is the string to be printed between numbers.
 * Return: alwasy the sum of the arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list(parameters);
	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, int);
		printf("%d", value);
		if (separator && i < (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(parameters);
}
