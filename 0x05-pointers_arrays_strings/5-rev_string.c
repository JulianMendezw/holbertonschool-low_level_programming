#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - counting the length of a string
 *@s: value waited from the main.c
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c;
	int r;
	char t;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	c--;
	for (r = 0; r < c; r++)
	{
		t = s[r];
		s[r] = s[c];
		s[c] = t;
		c--;
	}

}
