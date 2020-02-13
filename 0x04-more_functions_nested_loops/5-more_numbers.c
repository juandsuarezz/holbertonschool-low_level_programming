#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int n = 0;
int t = 0;
while (t < 10)
{
n = 0;
while (n <= 14)
{
if ((n / 10) > 0)
{
_putchar ((n / 10) + '0');
}
_putchar ((n % 10) + '0');
n++;
}
_putchar ('\n');
t++;
}
}
