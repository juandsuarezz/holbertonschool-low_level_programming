#include "holberton.h"
/**
 *print_diagonal - prints diagonal
 *@n: number of times 
 *
 *Return: void
 */
void print_diagonal(int n)
{
int c = 0;
int spaces = 0;
while (c < n)
{
spaces = 0;
while (spaces < c)
{
_putchar(' ');
spaces++;
}
_putchar('\\');
_putchar('\n');
c++;
}
if (n <= 0)
_putchar('\n');
}
