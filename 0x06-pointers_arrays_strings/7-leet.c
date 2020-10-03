#include "holberton.h"

/**
 * leet - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, x;
	char a[] = "4433007711";
	char l[] = "aAeEoOtTlL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
		if (s[i] == l[x])
		{
			s[i] = a[x];
		}
		}
	}
	return (s);
}
