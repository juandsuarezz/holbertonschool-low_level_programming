#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - entry point
 * Return: array
 * @s: array
 * @c: value
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c=='\0')
{
return (s);
}
else
return (NULL);
}
