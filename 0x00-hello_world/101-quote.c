#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Function to print char
 *@c: character
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - counting the string
 *@s: string waited
 */

void _printf(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * main - program
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	_printf(s);
	return (1);
}
