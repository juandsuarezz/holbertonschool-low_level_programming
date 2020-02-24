#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - entry point
 * Return: array
 * @haystack: array
 * @needle: value
 *
 */
char *_strstr(char *haystack, char *needle)
{
int a, b;
for (b = 0 ; needle[b] ; b++)
{
for (a = 0 ; haystack[a] ; a++)
{
if (haystack[a] == needle[b])
return (haystack + a);
}
}
if (needle == '\0')
return (haystack);
else
return (NULL);
}
