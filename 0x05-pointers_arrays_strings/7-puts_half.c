#include "holberton.h"

/**
 * puts_half - counting the length of a string
 *@str: value waited from the main.c
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int contador;
	int par;
	int impar;


	for (contador = 0; str[contador] != '\0'; contador++)
	{
	}
	if (contador % 2 == 0)
		{
		for (par = contador / 2; par < contador; par++)
		_putchar(str[par]);
		}
	else
		{
		for (impar = ((contador + 1) / 2) ; impar < contador; impar++)
		_putchar(str[impar]);
		}
	_putchar(10);
}
