#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: print from this number.
 */

void print_to_98(int n)
{
int l, x;
if (n <= 98)
{
for (l = n; l <= 98; l++)
{
if (l != 98)
printf("%d, ", l);
else if (l == 98)
printf("%d\n", l);
}
}
else if (n >= 98)
{
for (x = n; x >= 98; x--)
{
if (x != 98)
printf("d, ", x);
else if (x == 98)
printf("%d\n", x);
}
}
}
