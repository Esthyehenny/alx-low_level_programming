#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints all aphabet except q and e
 *
 *Return: Always 0
*/

int main(void)
{
char x = 'a';

while (x <= 'z')
{
if (x != 'e' && x != 'q')
{

putchar(x);
}

x++;
}
putchar('\n');

return (0);
}
