#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of
 * an array of integers.
 * @a: array
 * @n: numbers of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int u, temp, cond;

if (n % 2 == 0)
cond = n;

else
cond = n - 1;

for (u = 0; u < cond / 2; u++)
{
temp = a[u];
a[u] = a[n - 1];
a[n - 1] = temp;
n--;
}
}
