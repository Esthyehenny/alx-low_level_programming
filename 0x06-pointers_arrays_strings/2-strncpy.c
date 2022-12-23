#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 *
 * Return: Char pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
int u, x;

for (u = 0; u < n; u++)
{
if (src[u] == '\0')
{
for (x = u; x < n && dest[x] != '\0'; x++)
dest[x] = '\0';

break;
}
dest[u] = src[u];
}

return (dest);
}
