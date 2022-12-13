#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
char ls;

ls = 'a';

while (ls <= 'z')

{

_putchar(ls);
ls++;

}
_putchar('\n');
}
