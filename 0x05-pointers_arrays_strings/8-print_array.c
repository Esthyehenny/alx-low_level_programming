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

y = 0;
while (y < n)
{
printf("%d", a[y]);
}

if (y < n - 1)
{
printf(", ");
}

y++;
}

printf("\n")
;
}
