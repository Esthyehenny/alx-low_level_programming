#include <stdio.h>

/**
 * main - find and prints the sum of the
 * even-valued terms, followed by new line
 * Return: Always 0 (Success)
 */

int main(void)

{
int x;
unsigned long int
w, p, next, sum;
w = 1;
p = 2;
sum = 0;
for (x = 1; x <= 33; ++x)
if (w < 4000000 && (x % 2) == 0)
{
sum = sum + w;
}
next = w + p;
w = p;
p = next;
printf("%lu\n", sum);

return (0);
}
