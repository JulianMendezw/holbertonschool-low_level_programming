#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 *					of integers using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: the value to search for
 *
 * Return: The index of the value found in the array or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int m, i = 0, index = 0;
	int _size = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (index <= _size)
	{
		i = index;
		printf("Searching in array:  ");
		while (i <= ((int)_size))
		{
			if (i == ((int)_size))
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		printf("\n");

		m = floor((index + _size) / 2);

		if (array[m] < value)
			index = m + 1;
		else if (array[m] > value)
			_size = m - 1;
		else
			return (m);
	}

	return (-1);
}
