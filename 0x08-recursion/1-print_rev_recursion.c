#include "holberton.h"
/**
 * _print_rev_recursion - entry point
 * Return: array
 * @s: string
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar (*s);
}
