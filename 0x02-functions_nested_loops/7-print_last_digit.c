#include "main.h"

/**
 * print_last_digit - Write a function that prints
 * the last digit of a number.
 * @q: the int t0 extract values from
 * Return: The value of the last digit
 */

int print_last_digit(int q)
{
int y;
if (q < 0)
q = -q;
y = q % 10;
if (y < 0)
y = -y;
_putchar(y + '0');
return (y);
}
