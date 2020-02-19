#include "holberton.h"
/**
 * puts_half - Print the half of the string.
 * @str: String.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len;
	int half;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (half = ((len + 1) / 2); half < len; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
