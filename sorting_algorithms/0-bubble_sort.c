#include "sort.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 *				using the Bubble sort algorithm.
 * @array: The array of integers.
 * @size: Of the array.
 *
 */

void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	unsigned long int j = 0;
	unsigned long int i = 0;

	for (j = 0; j < size - 1; ++j)
	{
		for (i = 0; i < (size - j - 1); ++i)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
