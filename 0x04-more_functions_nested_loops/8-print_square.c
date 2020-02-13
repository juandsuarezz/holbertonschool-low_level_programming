#include "holberton.h"
/**
 * print_square - Entry point
 * @size: variable
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int n = 0;
int c;
if (size <= 0)
{
_putchar('\n');
return;
}
while (n < size)
{
c = 0;
while (c < size)
{
_putchar('#');
c++;
}
_putchar('\n');
n++;
}
}
