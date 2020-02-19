#include "holberton.h"
/**
 * puts2 - Print each two char.
 * @str: String.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len;
	int rev;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len = len - 1;
	for (rev = 0; rev <= len; rev++)
	{
		_putchar(str[rev]);
		rev++;
	}
	_putchar('\n');
}
