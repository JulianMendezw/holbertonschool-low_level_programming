#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *					using the Linear search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: the value to search for
 *
 * Return: The index of the value found in the array or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
