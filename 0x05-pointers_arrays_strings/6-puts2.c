#include "main.h"

/**
 * puts2 - Write a function that prints every other character of
 * a string, starting with the first character, followed by a new line.
 * @str: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
int f;

for (f = 0; str[f] != '\0'; f++)
{
if (f % 2 == 0)
_putchar (str[f]);
}

_putchar('\n');
}
