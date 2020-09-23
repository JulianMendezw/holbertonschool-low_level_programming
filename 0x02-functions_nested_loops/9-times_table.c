#include "holberton.h"
#include <stdio.h>
/**
 *times_table - Entry point
 *integrer to check
 *Return: Always 0 (Success)
 *
 */
void times_table(void)
{   
    int n1, n2, m1;
    for (n1 = 0; n1 < 10; n1++)
    {
        for (n2 = 0; n2 < 10; n2++)
        {
            m1 = n1 * n2;

            if ( m1 < 10)
            {
                _putchar(',');
                _putchar(' ');
            }
            else
            {
                /* code */
            }
            
        
        }
        

    _putchar('\n');
    }
   
}