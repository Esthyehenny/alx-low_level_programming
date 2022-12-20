#include "main.h"
#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
int y;

y = 0;

while (s[y] != '\0')
{
y++;
}

return (y);
}
