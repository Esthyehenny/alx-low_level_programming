#include "main.h"

/**
 * print_sign - Write a function that prints the sign of
 * a number.
 * @n: the int to be checked
 * Return: 1
 * print + if n > 0
 * print 0 if n is == 0
 * print - if n < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
