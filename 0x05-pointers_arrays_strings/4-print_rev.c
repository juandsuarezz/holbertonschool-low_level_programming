#include "holberton.h"
/**
 * _strlen - Function that returns the lenght of a string.
 * @s: Char as string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	return (x);
}
/**
 * print_rev - Print in reverse.
 * @s: Char as a string.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int rev;

	for (rev = _strlen(s); rev > 0; rev--)
	{
		_putchar(s[rev - 1]);
	}
	_putchar('\n');

}
