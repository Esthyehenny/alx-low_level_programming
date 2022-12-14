#include "main.h"

/**
 * times_table - Write a function that prints
 * the 9 times table, starting with 0.
 */

void times_table(void)
{
int l, m, n;
for (l = 0; l < 10; l++)
{
for (m = 0; m < 10; m++)
{
n = m * l;
if (m == 0)
{
_putchar(n + '0');
}
if (n < 10 && m != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else if (n >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
}
