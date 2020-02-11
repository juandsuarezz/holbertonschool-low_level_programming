#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int l = 'a';
while (l <= 'z')
{
_putchar (l);
l++;
}
_putchar ('\n');
}
