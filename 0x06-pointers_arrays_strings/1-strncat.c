#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int u = 0, x = 0;
char *p;

while (*(dest + 1) != '\0')
u++;
while (!(*(src + x) == '\0' || x == n))
{
*(dest + u) = *(src + x);
u++;
x++;
}

*(dest + u) = '\0';
p = dest;

return (p);
}
