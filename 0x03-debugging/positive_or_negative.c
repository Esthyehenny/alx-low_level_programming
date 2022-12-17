#include "main.h"

/**
 * main - print value of n if n is positive, negative or zero
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
if (i == 0)
{
printf("%d is zero\n");
}
else if (i > 0)
{
printf("%d is positive\n");
}
else
{
printf("%d is negative\n");
}
}
