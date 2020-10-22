/*
 * File: 0-print_name.c
 * Auth: Julian Mendez w
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 *@array: elements comming from main.
 *@size: The number of elements in the array.
 *@cmp: Is a pointer to the function to be used to compare values.
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((!array) || (!size) || (cmp == 0))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
