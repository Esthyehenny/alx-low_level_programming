#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int password[100];
int y, sum, p;

sum = 0;

srand(time(NULL));

for (y = 0; y < 100; y++)
{
password[y] = rand() % 78;
sum += (password[y] + '0');
putchar(password[y] + '0');

if ((2772 - sum) -'0' < 78)
{
p = 2772 - sum - '0';
sum += p;
putchar(p + '0');

break;
}
}

return (0);
}
