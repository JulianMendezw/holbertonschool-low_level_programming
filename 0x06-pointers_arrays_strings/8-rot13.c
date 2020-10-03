#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i, x;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (s[i] == l[x])
			{
				s[i] = a[x];
				break;	
			}
		}
		
	}
	return (s);
}
