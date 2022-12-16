#include "main.h"

/**
 * 1-isdigit.c - Write a function that checks
 * for a digit (0 through 9).
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
