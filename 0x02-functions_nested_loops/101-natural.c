#include <stdio.h>

/**
 * main - Write a program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long int
sum3, sum5, sum;
int p;

sum3 = 0;
sum5 = 0;
sum = 0;

for (p = 0; p < 1024; ++p)
{
if ((p % 3) == 0)
{
sum3 = sum3 + p;
}
else if ((p % 5) == 0)
{
sum5 = sum5 + p;
}
}
sum = sum3 + sum5;
printf("%lu\n", sum);
return (0);
}
