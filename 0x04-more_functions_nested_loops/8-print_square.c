#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: the size of the square
 */

void print_square(int size)
{
int r, s;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (r = 0; r < size; r++)
{
for (s = 0; s <= size; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
