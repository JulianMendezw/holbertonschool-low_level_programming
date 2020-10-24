/*
 * File: 3-print_all.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints strings, followed by a new line.
 *@format: is a list of types of arguments passed to the function.
 *
 * Return: alwasy the sum of the arguments.
 */

void print_all(const char * const format, ...)
{
	va_list(anything);
	int j;
	char *s;

	va_start(anything, format);

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(anything, int));
			break;
		case 'i':
			printf("%d", va_arg(anything, int));
			break;
		case 'f':
			printf("%f", va_arg(anything, double));
			break;
		case 's':
			s = va_arg(anything, char *);
			if (s == NULL)
				s = "(nil)";
				printf("%s", s);
				break;
		default:
			break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 's' ||
			format[j] == 'f') && (format[j + 1] != '\0'))
			printf(", ");
	j++;
	}
	printf("\n");
	va_end(anything);
}
