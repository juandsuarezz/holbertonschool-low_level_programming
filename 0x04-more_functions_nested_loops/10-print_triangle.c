#include "holberton.h"
/**
 * print_triangle - Entry point
 * @size: variable
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int spaces = 1;
int c = 1;
int n = 1;
if (size <= 0)
{
_putchar('\n');
}
while (n <= size)
{
spaces = 1;
c = 1;
while (spaces <= (size - n))
{
_putchar(' ');
spaces++;
}
while (c <= n)
{
_putchar('#');
c++;
}
_putchar('\n');
n++;
}
}
