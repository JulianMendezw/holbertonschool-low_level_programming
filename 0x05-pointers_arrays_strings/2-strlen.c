#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - addresses of variables
 *@a: value of var a
 *@b: value of var b
 * Return: Always 0.
 */


int _strlen(char *s)
{
	int i;

	for(i = 0; s[i] != '\0'; ++i)
	{
		printf("%d", i);
		s = i;
	}
	
	return(i);
}