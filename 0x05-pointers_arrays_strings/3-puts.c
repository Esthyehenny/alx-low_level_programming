#include "main.h"
#include <stdio.h>

/**
 * _puts- Write a function that prints a string, followed by a
 * new line, to stdout.
 * @str: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
char *b;
int q;

b = str;

for (q = 0; b[q]; q++)
{
_putchar (b[q]);
}

_putchar('\n');
}
