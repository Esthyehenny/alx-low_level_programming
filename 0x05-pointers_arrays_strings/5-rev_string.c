#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: Pointer to an int that will be changed
 *
 * Return: Always 0
 */

void rev_string(char *s)

{
char *start, *end, c;
int x, count;
int length = 0;

for (x = 0; s[x]; x++)
{
length++;
}

count = length;

start = s;
end = s;

for (x = 0; x < count - 1; x++)
{
end++;
}

for (x = 0; x < count / 2; x++)
{

c = *end;
*end = *start;
*start = c;

start++;
end--;
}
}
