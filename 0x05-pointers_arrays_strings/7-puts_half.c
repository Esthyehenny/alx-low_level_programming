#include "main.h"

/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * @str: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
int s, last;

s = 0;
while (str[s] != '\0')
{
s++;
}

last = (s + 1) / 2;

for (s = last; str[s]; s++)
{
_putchar (str[s]);
}

_putchar('\n');
}
