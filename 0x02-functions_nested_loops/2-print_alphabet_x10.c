#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
int n;
char x;

n = 0;
while (n < 10)
{
x = 'a';
while (x <= 'z')
{
_putchar (x);
x++;
}
_putchar('\n');
n++;
}
}
