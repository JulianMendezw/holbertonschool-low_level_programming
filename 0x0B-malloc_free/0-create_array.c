#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  A function that creates an array of chars,
 * and initializes it with a specific char.
 *
 *@size: this is the size of the variable reserved for malloc.
 *@c: Specific char to initializes the array.
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
	free(str);
}
