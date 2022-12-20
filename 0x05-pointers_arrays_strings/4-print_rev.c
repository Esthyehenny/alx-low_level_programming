#include "main.h"
#include <stdio.h>

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
int a;

a = 0;

while (s[a] != '\0')
{
a++;
}

for (a = a - 1 ; a >= 0; a--)
{
_putchar (s[a]);
}

_putchar('\n');
}
