#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int b;
while (haystack[0] != '\0')
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[0 + b] == needle[b])
continue;
else
break;
}
if (needle[b] == '\0')
return (haystack);
haystack++;
}
if (haystack[0] == '\0')
return (NULL);
else
return (haystack);
}
