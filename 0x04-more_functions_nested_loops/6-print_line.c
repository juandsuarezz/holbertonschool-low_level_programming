#include "holberton.h"
/**
 *print_line - Draws a line
 *@n: number of times
 *
 *Return: void
 */
void print_line(int n)
{
int c = 0;
while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
