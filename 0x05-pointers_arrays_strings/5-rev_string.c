#include "holberton.h"
/**
 * rev_string - Reverse a string.
 * @s: Char as a string.
 * Return: nothing.
 */
void rev_string(char *s)
{
	int final;
	int inicio;
	int guarde;

	for (final = 0; s[final] != '\0'; final++)
	{
	}
	final = final - 1;
	for (inicio = 0; inicio < final; inicio++)
	{
		guarde = s[inicio];
		s[inicio] = s[final];
		s[final] = guarde;
		final--;
	}
}
