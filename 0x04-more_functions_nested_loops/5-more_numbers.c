#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int l;
int t = 0;
int c;
int n;
int x = '0';
while (t < 10)
{
l = '0';
while (l <= '9')
{
_putchar (l);
l++;
}
c = 0;
while (c <= 4)
{
{
n = '1';
_putchar (n);
_putchar (x);
x++;
}
c++;
}
_putchar ('\n');
t++;
x = '0';
}
}
