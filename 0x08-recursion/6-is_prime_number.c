#include <stdio.h>
/**
 * new - prints buffer in hexa
 * @n: the address of memory to print
 * @a: the address of memory to print
 * Return: always return 0.
 */

int new(int n, int a)
{

	if (n % a == 0)
	{
		if (n == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (new(n, a + 1));
	}
}

/**
 * is_prime_number - prints buffer in hexa
 * @n: the address of memory to print
 *
 * Return: always return 0.
 */

int is_prime_number(int n)
{
	int a;

	a = 2;
	if (n > 1)
	{
		return (new(n, a));
	}
	else
	{
		return (0);
	}
}
