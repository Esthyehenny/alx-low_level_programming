#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 * @n: number of times \ will be printed
 */

void print_diagonal(int n)

{
int j, v;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (v = 0; v < n; v++)
{
if (j == v)
_putchar('\\');
else if (j < v)
_putchar(' ');
}
_putchar('\n');
}
}
}
