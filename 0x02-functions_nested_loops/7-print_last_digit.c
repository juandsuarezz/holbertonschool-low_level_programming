#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @num: description
 *Description: This program will print all letters in lowercase except for
 *q and e.
 *Return: 0 upon successful completion
 */
int print_last_digit(int num)
{
int lastdigit = num % 10;
if (lastdigit < 0)
{
_putchar(-lastdigit + '0');
return (-lastdigit);
}
else
{
_putchar(lastdigit + '0');
return (lastdigit);
}
}
