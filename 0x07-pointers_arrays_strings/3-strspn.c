#include "holberton.h"
/**
 * _strspn - entry point
 * Return: array
 * @s: array
 * @accept: value
 *
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a;
unsigned int b;
unsigned int c = 0;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
c++;
}
if (c < a)
break;
}
return (c);
}
