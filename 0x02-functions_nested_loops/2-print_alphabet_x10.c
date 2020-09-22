#include "holberton.h"

void print_alphabet(void)
{
    char a;
    for ( a = 'a' ; a <= 'z' ; a++)
    {
    _putchar(a);
    }
    
    _putchar('\n');
    
}
void print_alphabet_x10(void)
{
    int a;
    for ( a = '0'; a <= '9'; a++)
    {
        print_alphabet();
    }
}