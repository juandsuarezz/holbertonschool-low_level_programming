#include "holberton.h"
/**
 * _memcpy - entry point
 * Return: array
 * @dest: array
 * @src: value
 * @n: int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
