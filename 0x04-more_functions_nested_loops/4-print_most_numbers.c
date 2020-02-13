#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int c = '0';
while (c <= '9')
{
if ((c == '2') || (c == '4'))
{
c++;
}
else
{
_putchar(c);
c++;
}
}
_putchar ('\n');
}
