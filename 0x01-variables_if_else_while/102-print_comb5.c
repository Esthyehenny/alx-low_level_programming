#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write a program that prints all
 * possible combination of two two-digits numbers
 *
 *Return: Always 0
 */
int main(void)
{
int n, x;

for (n = 0; n < 100; n++)
{
for (x = 0; x < 100; x++)
{
if (n < x)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((x / 10) + 48);
putchar((x % 10) + 48);
if (n != 98 || x != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
