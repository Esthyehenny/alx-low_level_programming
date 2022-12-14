#include "main.h"

/**
 * print_times_table - Write a function that prints the n
 * times table, starting with 0.
 * @n: number of times table
 */

void print_times_table(int n)
{
int r, s, t;
if (n >= 0 && n <= 15)
{
for (r = 0; r <= n; r++)
{
for (s = 0; s <= n; s++)
{
t = s * r;
if (s == 0)
{
_putchar(t + '0');
}
else if (t < 10 && s != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(t + '0');
}
else if (t >= 10 && t < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((t / 10) + '0');
_putchar((t % 10) + '0');
}
else if (t >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((t / 100) + '0');
_putchar(((t / 10) % 10) + '0');
_putchar((t % 10) + '0');
}
}
_putchar('\n');
}
}
}
