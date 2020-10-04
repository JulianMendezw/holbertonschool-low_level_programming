#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
	
}

void _printf(char *s)
{
	int i;
       

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	_printf(s);
	return (1);
	
}
