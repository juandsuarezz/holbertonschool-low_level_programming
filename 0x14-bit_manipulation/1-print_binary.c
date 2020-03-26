#include "holberton.h"
/**
 * print_binary - Convert int to binary
 * @n: pointer
 */
void print_binary(unsigned long int n)
{
int j = n;
if (n == 0)
_putchar('0');
while (j)
{
if ((j & n) == 0)
_putchar ('0');
else
_putchar('1');
j = j >> 1;
}
}
