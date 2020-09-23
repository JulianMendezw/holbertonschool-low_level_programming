#include "holberton.h"
#include <stdio.h>
/**
 *jack_bauer - Entry point
 *integrer to check
 *Return: Always 0 (Success)
 *
 */
void jack_bauer(void)
{
    int h, m;
    for (h = 0; h <= 23; h++)
    {
        for (m = 0; m <= 59; m++)
        
        {
            _putchar((h / 10) + '0');
            _putchar((h % 10) + '0');
            _putchar(':');
            _putchar('0' + (m / 10));
            _putchar('0' + (m % 10));
            _putchar('\n');
        }
    }
}