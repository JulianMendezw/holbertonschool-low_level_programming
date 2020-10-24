/*
 * File: 2-print_strings.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_strings - A function that prints strings, followed by a new line.
 *@n: is the number of strings passed to the function
 *@separator: Is the string to be printed between numbers.
 * Return: alwasy the sum of the arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char * string;

	 va_list(strings);
	 va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nill)");
		}
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}