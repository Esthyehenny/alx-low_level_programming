#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints alphabets in lowercase and uppercase
 *
 *Return: Always 0
 */

int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}

for (n = 'A'; n <= 'A'; n++)
{
putchar(n);
}

putchar('\n');

return (0);
}
