/*
 * File: 0-print_name.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 *@name: string of name of the person.
 *@f: Pointer to function call "print_name_as_is".
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
