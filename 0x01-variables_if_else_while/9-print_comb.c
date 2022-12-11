#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints all possible combination of single-digit numbers
*
* Return: Always 0
*/

int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
putchar(x);

if (x != 57)
{
putchar(',');

putchar(' ');
}
}

putchar('\n');

return (0);

}
