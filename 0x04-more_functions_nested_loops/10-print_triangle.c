#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}

int u, x;
for (u = 1; u <= size; u++)
{
for (x = u; x < size; x++)
{
_putchar(' ');
}
{
for (x = 1; x < u; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
