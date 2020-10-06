
#include "holberton.h"

/**
 * _strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: always return 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; ; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
 			if (*s == accept[j])
			{
			return(s);
			}
		}
	}

	return (s);
}
