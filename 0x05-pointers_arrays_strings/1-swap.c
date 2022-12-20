#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of
 * two integers.
 *
 * @a: The integer to be sawpped with b
 * @b: The integer to be sawpped with a
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{

int new;

new = *a;
*a = *b;
*b = new;

}
