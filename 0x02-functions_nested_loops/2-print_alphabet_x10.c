#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int l;
int t = 0;
while (t < 10)
{
l = 'a';
while (l <= 'z')
{
_putchar (l);
l++;
}
_putchar ('\n');
t++;
}
}
