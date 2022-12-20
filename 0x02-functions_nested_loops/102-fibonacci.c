#include <stdio.h>

/**
 * main - Write a program that prints the first 50
 * Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0 (Success)
*/

int main(void)
{
long int l, m = 1, n = 2, sum = 0;

for (l = 0; l < 50; l++)
{
printf("%ld, ", m);
sum = m + n;
m = n;
n = sum;

if (l == 49)
printf("%ld\n", l);
}

return (0);
}
