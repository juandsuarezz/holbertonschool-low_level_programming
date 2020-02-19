#include "holberton.h"
/**
 * _puts - Print a string.
 * @str: Char as a string.
 * Return: Always 0.
 */
void _puts(char *str)
{

	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');


}
