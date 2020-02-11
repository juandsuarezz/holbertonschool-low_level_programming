#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int n = 0;
int r = 0;
while (r <= 9)
{
n = 0;
while (n <= 9)
{
if ((r * n) > 9)
{
_putchar(' ');
_putchar(((r * n) / 10) + '0');
_putchar(((r * n) % 10) + '0');
}
else
{
if (n != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar((r * n) +'0');
}
if (n != 9)
_putchar(',');
n++;
}
_putchar('\n');
r++;
}
}
