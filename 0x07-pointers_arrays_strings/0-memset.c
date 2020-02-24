#include "holberton.h"
/**
 * _memset - entry point
 * Return: array
 * @s: array
 * @b: value
 * @n: int
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
