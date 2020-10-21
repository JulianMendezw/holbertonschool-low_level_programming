/*
 * File: 1-array_iterator.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 *                  on each element of an array.
 *@array: Pointer to array.
 *@size: Number of elements of the array.
 *@action: funtion that it's calling from main.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array) && (size) && (action))
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
