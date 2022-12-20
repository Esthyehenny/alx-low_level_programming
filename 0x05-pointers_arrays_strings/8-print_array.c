#include "main.h"
#include <stdio.h>


/**
 * print_array - Write a function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: Pointer to an int that will be changed/ updated
 * @n: return value n
 * Return: Always 0
 */

void print_array(int *a, int n)
{
int y;

for (y = 0; y < n; ++y)
{

if (y != (n - 1))
printf("%d,", a[y]);

else
printf("%d,", a[y]);
}

printf("\n");
}
