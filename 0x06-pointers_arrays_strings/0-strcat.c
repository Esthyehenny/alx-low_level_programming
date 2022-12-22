#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: string 1
 * @src: string 2
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
int u = 0, x = 0;
char *p;

while (*(dest + u) != '\0')
u++;
while (*(src + x) != '\0')
{
*(dest + u) = *(src + x);
u++;
x++;
}
*(dest + u) = '\0';
p = dest;

return (p);
}
