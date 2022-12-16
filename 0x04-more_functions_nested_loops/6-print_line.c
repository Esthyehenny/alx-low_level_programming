#include "main.h"

/**
 * print_line - Write a function that draws a straight
 * line in the terminal.
 * @n: number of times _ will be printed.
 */

void print_line(int n)

{
int w;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (w = 1; w <= n; w++)
{
_putchar('_');
}
_putchar('\n');
}
}
