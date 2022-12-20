#include "main.h"

/**
 * _strcpy - rite a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to
 * by dest.
 *
 * @src: Pointer to a char that will be changed
 * @dest: Pointer to a char that will be changed
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int w;

w = 0;
while (src[w] != '\0')
{
dest[w] = src[w];
w++;
}
dest[w] = '\0';

return (dest);
}
