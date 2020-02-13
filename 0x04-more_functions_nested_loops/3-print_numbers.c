#include "holberton.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int c = '0';
while (c <= '9')
{
_putchar(c);
c++;
}
_putchar ('\n');
}
